using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharactorEquip : MonoBehaviour
{
    private EquipSlot[] equipSlots;
    private int maxDamage, minDamage, maxDefense, minDefense;

    void Start()
    {
        equipSlots = GetComponentsInChildren<EquipSlot>();
        for (int i = 0; i < equipSlots.Length; i++){
            Debug.Log(equipSlots[i].slotType);
        }
    }

    public void CheckEquipItem()
    {
        CleanData();
        foreach(EquipSlot equipItem in equipSlots){
            if(equipItem.curEquipItem.equipType == EquipType.Weapon ){
                maxDamage += equipItem.curEquipItem.maxValue;
                minDamage += equipItem.curEquipItem.minValue;
            }
            else{
                maxDefense += equipItem.curEquipItem.maxValue;
                minDefense += equipItem.curEquipItem.minValue;
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
        ItemData itemData= inventoryItem.itemData;
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
    
}
  
