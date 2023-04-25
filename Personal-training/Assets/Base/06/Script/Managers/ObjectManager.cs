using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
public class ObjectManager : MonoBehaviour
{
    public ItemData[] items;
    public Resource[] resoruces;
    public BuildingData[] buildings;
    public NPCData[] npcs;

    public static ObjectManager instance;

    private void Awake() {
        instance = this;
        // load in all the assets we need
        items = Resources.LoadAll<ItemData>("Items");
        buildings = Resources.LoadAll<BuildingData>("Building");
        npcs = Resources.LoadAll<NPCData>("NPCs");
    }
    private void Start() {
        //get all of the resources
        resoruces = FindObjectsOfType<Resource>();
    }

    public ItemData GetItemByID(string id){
        for(int x = 0; x < items.Length; x++){
            if(items[x].id == id){
                return items[x];
            }
        }
        Debug.LogError("No item has been find");
        return null;
    }

    public BuildingData GetBuildingByID(string id){
        for(int x = 0; x < buildings.Length; x++){
            if(buildings[x].id == id){
                return buildings[x];
            }
        }
        Debug.LogError("No building has been find");
        return null;
    }

    public NPCData GetNPCByID(string id){
        for(int x = 0; x < npcs.Length; x++){
            if(npcs[x].id == id){
                return npcs[x];
            }
        }
        Debug.LogError("No NPC has been find");
        return null;
    }

}
