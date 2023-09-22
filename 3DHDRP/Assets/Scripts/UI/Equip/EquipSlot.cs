using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public enum SlotType{
    Weapon,
    Weapon2,
    Head,
    Body,
    Belt,
    Accessory,
    Normal
        
}
public class EquipSlot : MonoBehaviour
{
    private EquipItemManager equipItemManager;
    public SlotType slotType;
    public InventoryItem curEquipItem;
    public InventoryItem curEquipItem2;
    public InventoryItem saveItemData;
    public InventoryItem temporaryItemData;
    Image image;
    Sprite originalSprite;
    Image backgroundImage;
    Sprite bgOrginalSprite;
    

    private void Awake() {
        equipItemManager = FindObjectOfType<EquipItemManager>();
        image = GetComponent<Image>();
        originalSprite = image.sprite;
        backgroundImage = transform.parent.GetChild(0).GetComponent<Image>();
        bgOrginalSprite = backgroundImage.sprite;
    }

    public void EquipItem(InventoryItem item){
        if(temporaryItemData != null){ temporaryItemData = null;}
        if(curEquipItem != null){
            temporaryItemData = curEquipItem;
        }
        curEquipItem = item;
        image.sprite = curEquipItem.itemData.itemIcon;

        CheckItemDataforEquipManager();
    }
    public void EquipItem(){
        image.sprite = curEquipItem.itemData.itemIcon;

        CheckItemDataforEquipManager();
    }

    public void UnEquipItem()
    {
        curEquipItem = null;
        image.sprite = originalSprite;
        temporaryItemData = null;

        CheckItemDataforEquipManager();
    }

    private void CheckItemDataforEquipManager()
    {
        if (slotType == SlotType.Weapon)
        {
            equipItemManager.Weapon1 = curEquipItem;
        }
        else if (slotType == SlotType.Weapon2)
        {
            equipItemManager.Weapon2 = curEquipItem;
        }
        else{
            return;
        }
    }

    public void Show(bool a, bool b){
        switch(a){
            case true :
                switch(b){
                    case true:
                        backgroundImage.sprite = null;
                        backgroundImage.color = Color.green;
                    break;
                    case false:
                        backgroundImage.sprite = null;
                        backgroundImage.color = Color.red;
                    break;
                }
            break;
            case false :
                switch(b){
                    case true:
                        backgroundImage.sprite = bgOrginalSprite;
                        backgroundImage.color = Color.white;
                    break;
                    case false:
                        backgroundImage.sprite = bgOrginalSprite;
                        backgroundImage.color = Color.white;
                    break;
                }
            break;
        }
    }

}

public struct StructInventoryItem{
    ItemData itemData;
    int quantity;
    public StructInventoryItem(ItemData item, int q){
        itemData = item;
        quantity = q;
    }
}
