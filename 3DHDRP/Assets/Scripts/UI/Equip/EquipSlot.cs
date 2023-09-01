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

    private void Awake() {
        image = GetComponent<Image>();
        originalSprite = image.sprite;
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

    public bool CheckCanEquip(InventoryItem inventoryItem){
        ItemData item = inventoryItem.itemData;
        if (item.equipType == EquipType.Weapon)
        {
            if (item.weaponType == WeaponType.BothHandedMelee)
            {
                if(slotType == SlotType.Weapon && curEquipItem == null){
                    return true;
                }
                else if(slotType == SlotType.Weapon2 && curEquipItem == null){
                    return true;
                }
                else if(slotType == SlotType.Weapon && curEquipItem != null){
                    return true;
                }
                else if(slotType == SlotType.Weapon2 && curEquipItem != null){
                    return true;
                }
            }
            else if (item.weaponType == WeaponType.MainHandedMelee)
            {
                if (slotType == SlotType.Weapon)
                {
                    return true;
                }
            }
            else if (item.weaponType == WeaponType.SubHandedMelee)
            {
                if (slotType == SlotType.Weapon2)
                {
                    return true;
                }
            }
            else if (item.weaponType == WeaponType.TwoHandedMelee)
            {
                if (slotType == SlotType.Weapon)
                {
                    return true;
                }
            }
        }
        else{
            if(item.armorPlaceType == ArmorPlaceType.Head){
                if(slotType == SlotType.Head){
                    return true;
                }
            }
            else if(item.armorPlaceType == ArmorPlaceType.Body){
                if(slotType == SlotType.Body){
                    return true;
                }
                
            }
            else if(item.armorPlaceType == ArmorPlaceType.Belt){
                if(slotType == SlotType.Belt){
                    return true;
                }
                
            }
            else if(item.armorPlaceType == ArmorPlaceType.Accessory){
                if(slotType == SlotType.Accessory){
                    return true;
                }
                
            }
            else if(item.armorPlaceType == ArmorPlaceType.Normal){
                if(slotType == SlotType.Normal){
                    return true;
                }
                
            }
        }
        return false;
    }

    private bool isNull(EquipSlot equipitem){
        if(equipitem.curEquipItem != null){
            return false;
        }
        return true;
    }
}
