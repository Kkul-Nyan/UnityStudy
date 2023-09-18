using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharactorEquip : MonoBehaviour
{
    
    private EquipSlot[] equipSlots;
    private int maxDamage, minDamage, maxDefense, minDefense;
    private EquipSlot weaponSlot;
    private EquipSlot weaponSlot2;
    
    public Button[] slot1BTNs;
    public Button[] slot2BTNs;
    bool isSlot1 = true;
    Sprite originalSprite;
    void Start()
    {
        equipSlots = GetComponentsInChildren<EquipSlot>();

        weaponSlot = FindSlot(SlotType.Weapon);
        weaponSlot2 = FindSlot(SlotType.Weapon2);
        
        Image image = slot1BTNs[0].GetComponent<Image>();
        originalSprite = image.sprite;

        if(isSlot1 == true){
            OnChangeWeaponSlot1Button();
        }
        else{
            OnChangeWeaponSlot2Button();
        }
    }

    public void CheckEquipItem()
    {
        CleanData();
        foreach(EquipSlot equipItem in equipSlots){
            if(equipItem.curEquipItem.itemData.equipType == EquipType.Weapon ){
                maxDamage += equipItem.curEquipItem.itemData.maxValue;
                minDamage += equipItem.curEquipItem.itemData.minValue;
            }
            else{
                maxDefense += equipItem.curEquipItem.itemData.maxValue;
                minDefense += equipItem.curEquipItem.itemData.minValue;
            }
        }
    }

    private void CleanData()
    {
        maxDamage = 0; 
        minDamage = 0; 
        maxDefense = 0;
        minDefense = 0;
    }

    private EquipSlot FindSlot(SlotType slotTypeToFind)
    {
        foreach (EquipSlot slot in equipSlots)
        {
            if (slot.slotType == slotTypeToFind)
            {
                return slot;
            }
        }
        return null;
    }

    public EquipSlot SearchCanEquip(InventoryItem inventoryItem){
        ItemData itemData = inventoryItem.itemData;
        if(itemData.equipType == EquipType.Weapon){
            EquipSlot weapon = FindSlot(SlotType.Weapon);
            Debug.Log("weapon");
            EquipSlot weapon2 = FindSlot(SlotType.Weapon2);

            if(itemData.weaponType == WeaponType.BothHandedMelee){
                if(weapon.curEquipItem == null){
                    return weapon;
                }
                else if(weapon.curEquipItem != null && weapon2.curEquipItem == null){
                    return weapon2;
                }
                else if(weapon.curEquipItem != null && weapon2.curEquipItem != null){
                    return weapon;
                }
            }
            else if(itemData.weaponType == WeaponType.MainHandedMelee){
                return weapon;
                
            }
            else if(itemData.weaponType == WeaponType.SubHandedMelee){
                return weapon;
                
            }
            else if(itemData.weaponType == WeaponType.TwoHandedMelee){
                weapon2.UnEquipItem();
                return weapon;
            }
        }
        else if(itemData.equipType == EquipType.Armor){
            if(itemData.armorPlaceType == ArmorPlaceType.Head){
                EquipSlot head = FindSlot(SlotType.Head);
                return head;
            }
            else if(itemData.armorPlaceType == ArmorPlaceType.Body){
                EquipSlot body = FindSlot(SlotType.Body);
                return body;
            }
            else if(itemData.armorPlaceType == ArmorPlaceType.Belt){
                EquipSlot belt = FindSlot(SlotType.Belt);
                belt.EquipItem(inventoryItem);
            }
            else if(itemData.armorPlaceType == ArmorPlaceType.Accessory){
                int count = 0;
                foreach(EquipSlot curslot in equipSlots){
                    if(curslot.curEquipItem == null && curslot.slotType == SlotType.Accessory){
                        return curslot;
                    }
                    else{
                        count ++;
                        if(equipSlots.Length == count){
                            EquipSlot accessory = FindSlot(SlotType.Accessory);
                            return accessory;
                        }
                    }
                } 
            }
            else if(itemData.armorPlaceType == ArmorPlaceType.Normal){
                int count = 0;
                foreach(EquipSlot curslot in equipSlots){
                    if(curslot.curEquipItem == null && curslot.slotType == SlotType.Normal){
                        return curslot;
                    }
                    else{
                        count ++;
                        if(equipSlots.Length == count){
                            EquipSlot normal = FindSlot(SlotType.Normal);
                            return normal;
                        }
                    }
                } 
            }

        }
        else{
            return null;
        }
        return null;
    }
    
    public void OnChangeWeaponSlot1Button(){
        isSlot1 = true;
        foreach(Button btn in slot1BTNs){
            Image image = btn.GetComponent<Image>();
            image.sprite = originalSprite;
        }
        foreach(Button btn in slot2BTNs){
            Image image = btn.GetComponent<Image>();
            image.sprite = btn.spriteState.disabledSprite;
        }
        weaponSlot.saveItemData = weaponSlot.curEquipItem;
        weaponSlot.curEquipItem = weaponSlot.curEquipItem2;
        weaponSlot.curEquipItem2 = weaponSlot.saveItemData;

        weaponSlot2.saveItemData = weaponSlot2.curEquipItem;
        weaponSlot2.curEquipItem = weaponSlot2.curEquipItem2;
        weaponSlot2.curEquipItem2 = weaponSlot2.saveItemData;
        
        if(weaponSlot.curEquipItem == null){ 
            weaponSlot.UnEquipItem(); 
        }
        else{
            weaponSlot.EquipItem();
        }

        if(weaponSlot2.curEquipItem == null){ 
            weaponSlot2.UnEquipItem(); 
        }
        else{
            weaponSlot2.EquipItem();
        }
    }

    public void OnChangeWeaponSlot2Button(){
          isSlot1 = false;
        foreach(Button btn in slot2BTNs){
            Image image = btn.GetComponent<Image>();
            image.sprite = originalSprite;
        }
        foreach(Button btn in slot1BTNs){
            Image image = btn.GetComponent<Image>();
            image.sprite = btn.spriteState.disabledSprite;
        }
        weaponSlot.saveItemData = weaponSlot.curEquipItem;
        weaponSlot.curEquipItem = weaponSlot.curEquipItem2;
        weaponSlot.curEquipItem2 = weaponSlot.saveItemData;

        weaponSlot2.saveItemData = weaponSlot2.curEquipItem;
        weaponSlot2.curEquipItem = weaponSlot2.curEquipItem2;
        weaponSlot2.curEquipItem2 = weaponSlot2.saveItemData;
        
        if(weaponSlot.curEquipItem == null){ 
            weaponSlot.UnEquipItem(); 
        }
        else{
            weaponSlot.EquipItem();
        }
        
        if(weaponSlot2.curEquipItem == null){ 
            weaponSlot2.UnEquipItem(); 
        }
        else{
            weaponSlot2.EquipItem();
        }
    }
}
  
