using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.Events;
using Sirenix.OdinInspector;

public class Inventory : MonoBehaviour
{
    public ItemSlotUI[] uiSlots;
    public ItemSlot[] slots;

    [Title("Info", titleAlignment: TitleAlignments.Centered)]
    public GameObject inventoryWindow;
    public Transform dropPosition;
    
    [Header("Selected Item")]
    private ItemSlot selectedItem;
    private int selectedItemIndex;
    [TitleGroup("SelectItemInfo", alignment: TitleAlignments.Centered)]
    public TextMeshProUGUI selectedItemName;
    public TextMeshProUGUI selectedItemDescription;
    public TextMeshProUGUI selectedItemStatNames;
    public TextMeshProUGUI selectedItemStatValues;

    [TitleGroup("Button", alignment: TitleAlignments.Centered)]
    public GameObject useBTN;
    public GameObject equipBTN;
    public GameObject unEquipBTN;
    public GameObject dropBTN;
    private int curEquipIndex;


    [Header("Components")]
    private PlayerController06 controller;
    private PlayerNeeds needs;

    [TitleGroup("Event", alignment: TitleAlignments.Centered)]
    public UnityEvent onOpenInventory;
    public UnityEvent onCloseInventory;

    [Header("Singleton")]
    public static Inventory instance;

    private void Awake() {
        instance = this;
        controller = GetComponent<PlayerController06>();
        needs = GetComponent<PlayerNeeds>();
    }
    private void Start() {
        inventoryWindow.SetActive(false);
        slots = new ItemSlot[uiSlots.Length];

        //initialize the slots
        for(int x = 0; x <slots.Length; x++){
            slots[x] = new ItemSlot();
            uiSlots[x].index = x;
            uiSlots[x].Clear();
        }

        ClearSelectedItemWindow();
    }

    public void OnInventoryBTN(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Started){
            Toggle();
        }
    }

    public void Toggle() {
        if(inventoryWindow.activeInHierarchy){
            inventoryWindow.SetActive(false);
            onCloseInventory.Invoke();
            controller.ToggleCursor(false);
        }
        else {
            inventoryWindow.SetActive(true);
            onOpenInventory.Invoke();
            ClearSelectedItemWindow();
            controller.ToggleCursor(true);
        }

    }

    public bool IsOpen(){
        return inventoryWindow.activeInHierarchy;
    }

    public void AddItem (ItemData item){
        if(item.canStack){
            ItemSlot slotToStackTo = GetItemSlot(item);

            if(slotToStackTo != null){
                slotToStackTo.quantity ++;
                UpdateUI();
                return;
            }
        }

        ItemSlot emptySlot = GetEmptySlot();
        if(emptySlot != null){
            emptySlot.item = item;
            emptySlot.quantity = 1;
            UpdateUI();
            return;
        }

        ThrowItem(item);
    }

    void ThrowItem (ItemData item){
        Instantiate(item.dropPrefab, dropPosition.position, Quaternion.Euler(Vector3.one * Random.value * 360.0f));
    }

    void UpdateUI(){
        for(int x = 0; x< slots.Length; x++){
            if(slots[x].item != null) {
                uiSlots[x].Set(slots[x]);
            }
            else {
                uiSlots[x].Clear();
            }
        }
    }

    ItemSlot GetItemSlot(ItemData item){
        for(int x = 0; x < slots.Length; x++){
            if(slots[x].item == item && slots[x].quantity < item.maxStackAmount){
                return slots[x];
            }
        }
        return null;
    }

    ItemSlot GetEmptySlot(){
        for(int x= 0; x < slots.Length; x++){
            if(slots[x].item == null){
                return slots[x];
            }
        }
        return null;
    }

    public void SelectItem(int index){
        if(slots[index].item == null){
            return;
        }

        selectedItem = slots[index];
        selectedItemIndex = index;

        selectedItemName.text = selectedItem.item.displayName;
        selectedItemDescription.text = selectedItem.item.description;

        selectedItemStatNames.text = string.Empty;
        selectedItemStatValues.text = string.Empty;

        for(int x = 0; x < selectedItem.item.consumable.Length; x++){
            selectedItemStatNames.text += selectedItem.item.consumable[x].type.ToString() + "\n";
            selectedItemStatValues.text += selectedItem.item.consumable[x].value.ToString() + "\n";

        }

        useBTN.SetActive(selectedItem.item.type == ItemType.Consumable);
        equipBTN.SetActive(selectedItem.item.type == ItemType.Equipable && !uiSlots[index].equipped);
        unEquipBTN.SetActive(selectedItem.item.type == ItemType.Equipable && uiSlots[index].equipped);
        dropBTN.SetActive(true);
    }

    void ClearSelectedItemWindow(){
        selectedItem = null;
        selectedItemName.text = string.Empty;
        selectedItemDescription.text = string.Empty;
        selectedItemStatNames.text = string.Empty;
        selectedItemStatValues.text = string.Empty;

        useBTN.SetActive(false);
        equipBTN.SetActive(false);
        unEquipBTN.SetActive(false);
        dropBTN.SetActive(false);
    }
    
    public void OnUseBTN(){
        if(selectedItem.item.type == ItemType.Consumable){
            for(int x = 0; x < selectedItem.item.consumable.Length; x++){
                switch(selectedItem.item.consumable[x].type){
                    case ConsumableType.Health: needs.Heal(selectedItem.item.consumable[x].value); break;
                    case ConsumableType.Hunger: needs.Eat(selectedItem.item.consumable[x].value); break;
                    case ConsumableType.Thirst: needs.Drink(selectedItem.item.consumable[x].value); break;
                    case ConsumableType.Sleep: needs.Sleep(selectedItem.item.consumable[x].value); break;
                }
            }
        }

        RemoveSelectedItem();
    }

    public void OnEquipBTN(){
        if(uiSlots[curEquipIndex].equipped){
            UnEquipBTN(curEquipIndex);
        }

        uiSlots[selectedItemIndex].equipped = true;
        curEquipIndex = selectedItemIndex;
        EquipItemManager.instance.EquipNew(selectedItem.item);
        UpdateUI();

        SelectItem(selectedItemIndex);
    }
    public void UnEquipButton(){
        UnEquipBTN(selectedItemIndex);
    }
    public void UnEquipBTN(int index){
        uiSlots[index].equipped = false;
        EquipItemManager.instance.UnEquip();
        UpdateUI();

        if(selectedItemIndex == index){
            SelectItem(index);
        }
    }
     
    public void OnDropBTN(){
        ThrowItem(selectedItem.item);
        RemoveSelectedItem();
    }

    void RemoveSelectedItem(){
        selectedItem.quantity --;
        if(selectedItem.quantity == 0){
            if(uiSlots[selectedItemIndex].equipped == true){
                UnEquipBTN(selectedItemIndex);
            }

            selectedItem.item = null;
            ClearSelectedItemWindow();
        }
        UpdateUI();
    }

    public void RemoveItem (ItemData item){
        for(int i = 0; i < slots.Length; i++){
            if(slots[i].item == item){
                slots[i].quantity--;

                if(slots[i].quantity == 0){
                    if(uiSlots[i].equipped == true){
                        UnEquipBTN(i);
                    }
                    slots[i].item = null;
                    ClearSelectedItemWindow();
                }
                UpdateUI();
                return;
            }
        }
    }

    public bool HasItem(ItemData item, int quantity){
        int amount = 0;

        for(int i = 0; i< slots.Length; i++)
        {
            if(slots[i].item == item)
                amount += slots[i].quantity;
            
            if(amount >= quantity)
                return true;
        }
        
        return false;
    }

}

public class ItemSlot
{
    public ItemData item;
    public int quantity;
}