using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using UnityEngine.InputSystem;

public class SaveManager : MonoBehaviour
{
    
    private void Start() {
        StartCoroutine(LoadGame());
    }

    IEnumerator LoadGame(){
        yield return new WaitForEndOfFrame();

        if(PlayerPrefs.HasKey("Save")){
            Load();
        }
    }
    private void Update() {
        if(Keyboard.current.nKey.wasPressedThisFrame){
            Save();
            Debug.Log("SAVE");
        }
        if(Keyboard.current.mKey.wasPressedThisFrame){
            Load();
        }
    }
    [Button]
    void ResetSave() {PlayerPrefs.DeleteAll(); Debug.Log("Reset SaveData");}

    [ButtonGroup]
    void Save(){
        

        SaveData data = new SaveData();
        //Player
        data.playerPos = new SVec3(PlayerController06.instance.transform.position);
        data.playerRot = new SVec3(PlayerController06.instance.transform.eulerAngles);
        data.playerLook = new SVec3(PlayerController06.instance.cameraContainer.localEulerAngles);

        data.health = PlayerNeeds.instance.health.curValue;
        data.hunger = PlayerNeeds.instance.hunger.curValue;
        data.thirst = PlayerNeeds.instance.thirst.curValue;
        data.sleep = PlayerNeeds.instance.sleep.curValue;

        //Inventory
        data.inventory = new SInvenstorySlot[Inventory.instance.slots.Length];

        for(int x = 0; x < Inventory.instance.slots.Length; x++){
            data.inventory[x] = new SInvenstorySlot();
            data.inventory[x].occupied = Inventory.instance.slots[x].item != null;

            if(!data.inventory[x].occupied){
                continue;
            }

            data.inventory[x].itemID = Inventory.instance.slots[x].item.id;
            data.inventory[x].quantity = Inventory.instance.slots[x].quantity;
            data.inventory[x].equipped = Inventory.instance.uiSlots[x].equipped;
        }


        //droped items
        ItemObject[] droppedItems = FindObjectsOfType<ItemObject>();
        data.droppedItems = new SDroppedItem[droppedItems.Length];
        for(int x = 0; x < droppedItems.Length; x ++){
            data.droppedItems[x] = new SDroppedItem();
            data.droppedItems[x].itemId = droppedItems[x].item.id;
            data.droppedItems[x].position = new SVec3(droppedItems[x].transform.position);
            data.droppedItems[x].rotation = new SVec3(droppedItems[x].transform.eulerAngles);
        }

        //buildings
        Building[] buildingObjects = FindObjectsOfType<Building>();
        data.buildings = new SBuilding[buildingObjects.Length];
        for(int x = 0; x < buildingObjects.Length; x++){
            data.buildings[x] = new SBuilding();
            data.buildings[x].buildingId = buildingObjects[x].data.id;
            data.buildings[x].position = new SVec3(buildingObjects[x].transform.position);
            data.buildings[x].rotation = new SVec3(buildingObjects[x].transform.eulerAngles);
            data.buildings[x].customProperties = buildingObjects[x].GetCustomProperties();
        }

        //resources
        data.resources =  new SResource[ObjectManager.instance.resoruces.Length];
        for(int x = 0; x <ObjectManager.instance.resoruces.Length; x++){
            data.resources[x] = new SResource();
            data.resources[x].index = x;
            data.resources[x].destoryed = ObjectManager.instance.resoruces[x] ==null;
            if(!data.resources[x].destoryed){
                data.resources[x].capacity = ObjectManager.instance.resoruces[x].capacity;
            }
        }

        //NPCs
        NPC[] npcs = FindObjectsOfType<NPC>();
        data.npcs = new SNPC[npcs.Length];
        for(int x = 0; x < npcs.Length; x++){
            data.npcs[x] =new SNPC();
            data.npcs[x].prefabId = npcs[x].data.id;
            data.npcs[x].position = new SVec3(npcs[x].transform.position);
            data.npcs[x].rotation = new SVec3(npcs[x].transform.eulerAngles);
            data.npcs[x].aiState = (int)npcs[x].aiType;
            data.npcs[x].hasAgentDestination = !npcs[x].agent.isStopped;
            data.npcs[x].agentDestination = new SVec3(npcs[x].agent.destination);
        }

        //time of day
        data.timeOfDay = DayNightCycle.instance.time;

        string rawData = JsonUtility.ToJson(data);
        PlayerPrefs.SetString("Save", rawData);
        

    }

     [ButtonGroup]
    void Load(){
        SaveData data = JsonUtility.FromJson<SaveData>(PlayerPrefs.GetString("Save"));
        Debug.Log(PlayerPrefs.GetString("Save"));
        Debug.Log(data.inventory.Length);
        //Player
        PlayerController06.instance.transform.position = data.playerPos.GetVector3();
        PlayerController06.instance.transform.eulerAngles = data.playerRot.GetVector3();
        PlayerController06.instance.cameraContainer.localEulerAngles = data.playerLook.GetVector3();

        PlayerNeeds.instance.health.curValue = data.health;
        PlayerNeeds.instance.hunger.curValue = data.hunger;
        PlayerNeeds.instance.thirst.curValue = data.thirst;
        PlayerNeeds.instance.sleep.curValue = data.sleep;

        //Inventory
        int equippedItem = 999;
        for(int x = 0; x < data.inventory.Length; x++){
            if(!data.inventory[x].occupied){
                continue;
            }
        
            Inventory.instance.slots[x].item = ObjectManager.instance.GetItemByID(data.inventory[x].itemID);
            if(Inventory.instance.slots[x].item == null){
                continue;
            }
            Inventory.instance.slots[x].quantity = data.inventory[x].quantity;

            if(data.inventory[x].equipped){
                equippedItem = x;
            }
        }
        if(equippedItem != 999){
            Inventory.instance.SelectItem(equippedItem);
            Inventory.instance.OnEquipBTN();
        }

        //destory all pre existing dropped Items
        ItemObject[] droppendItems = FindObjectsOfType<ItemObject>();
        for(int x  = 0; x <droppendItems.Length; x++){
            Destroy(droppendItems[x].gameObject);
        }

        //spawn dropped items
        for( int i = 0; i < data.droppedItems.Length; i++){
            GameObject prefab = ObjectManager.instance.GetItemByID(data.droppedItems[i].itemId).dropPrefab;
            Instantiate(prefab, data.droppedItems[i].position.GetVector3(), Quaternion.Euler(data.droppedItems[i].rotation.GetVector3()));
        }

        //destory same building
        Building[] existBuilding = FindObjectsOfType<Building>();
        for(int i = 0; i < data.buildings.Length; i++){
            Destroy(existBuilding[i].gameObject);

        }

        //buildings
        for(int i = 0; i < data.buildings.Length; i++){
            GameObject prefab = ObjectManager.instance.GetBuildingByID(data.buildings[i].buildingId).spawnPrefab;
            GameObject building = Instantiate(prefab, data.buildings[i].position.GetVector3(), Quaternion.Euler(data.buildings[i].rotation.GetVector3()));
            building.GetComponent<Building>().ReceiveCustomProperties(data.buildings[i].customProperties);
        }

        // resources
        for(int i = 0; i < ObjectManager.instance.resoruces.Length; i++){
            if(data.resources[i].destoryed){
                Destroy(ObjectManager.instance.resoruces[i].gameObject);
                continue;
            }
            ObjectManager.instance.resoruces[i].capacity = data.resources[i].capacity;
        }

        //Destory all pre existing NPCs
        NPC[] npcs = FindObjectsOfType<NPC>();
        for(int x = 0; x < npcs.Length; x++){
            Destroy(npcs[x].gameObject);
        }

        //Spawn NPCs
        for(int x = 0; x < data.npcs.Length; x++){
            GameObject prefab = ObjectManager.instance.GetNPCByID(data.npcs[x].prefabId).spawnPrefab;
            GameObject npcObj = Instantiate(prefab, data.npcs[x].position.GetVector3(), Quaternion.Euler(data.npcs[x].rotation.GetVector3()));
            NPC npc =npcObj.GetComponent<NPC>();

            npc.aiState = (AIState)data.npcs[x].aiState;
            npc.agent.isStopped = !data.npcs[x].hasAgentDestination;
            if(!npc.agent.isStopped){
                npc.agent.SetDestination(data.npcs[x].agentDestination.GetVector3());
            }
        }

        //time of day
        DayNightCycle.instance.time = data.timeOfDay;


    }
}
