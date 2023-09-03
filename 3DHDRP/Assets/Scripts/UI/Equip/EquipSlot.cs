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
    public SlotType slotType;
    public ItemData curEquipItem;
    public ItemData temporaryItemData;
    Image image;
    Sprite originalSprite;
    CharactorEquip charactorEquip;

    private void Awake() {
        image = GetComponent<Image>();
        originalSprite = image.sprite;
        charactorEquip = GetComponent<CharactorEquip>();
    }

    public void EquipItem(InventoryItem item){
        if(curEquipItem != null){
            temporaryItemData = curEquipItem;
        }
        curEquipItem = item.itemData;
        image.sprite = curEquipItem.itemIcon;
    }

    public void UnEquipItem(){
        curEquipItem = null;
        image.sprite = originalSprite;
        temporaryItemData = null;
    }

}
