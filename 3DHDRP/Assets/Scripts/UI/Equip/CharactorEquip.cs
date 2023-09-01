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

    /*
    public EquipSlot AutoCheckEquipSlot(InventoryItem item){
        //우선 끼울수있는 슬롯을 찾더라도 빈 슬롯에 우선해서 장착하기 위해 먼저 장착된슬롯인지 확인
        foreach(EquipSlot equipitem in equipSlots){
            if(item.itemData.equipType == EquipType.Weapon){
                switch(item.itemData.weaponType){
                    case WeaponType.BothHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon ){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        else if(equipitem.slotType == SlotType.Weapon2 ){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case WeaponType.MainHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case WeaponType.SubHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon2){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case WeaponType.TwoHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                }
            }
            else{
                switch(item.itemData.armorPlaceType){
                    case ArmorPlaceType.Head:
                        if(equipitem.slotType == SlotType.Head){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case ArmorPlaceType.Body:
                        if(equipitem.slotType == SlotType.Body){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case ArmorPlaceType.Belt:
                        if(equipitem.slotType == SlotType.Belt){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case ArmorPlaceType.Accessory:
                        if(equipitem.slotType == SlotType.Accessory){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                    case ArmorPlaceType.Normal:
                        if(equipitem.slotType == SlotType.Normal){
                            if(CheckisNull(equipitem)){
                                return equipitem;
                            }
                        }
                        break;
                }
            }
        }
        //장착된 슬롯외에 자리가 없다면, 가장먼저 가능한 곳에 장착
        foreach(EquipSlot equipitem in equipSlots){
            if(item.itemData.equipType == EquipType.Weapon){
                switch(item.itemData.weaponType){
                    case WeaponType.BothHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon ){
                            return equipitem;
                        }
                        else if(equipitem.slotType == SlotType.Weapon2 ){
                            return equipitem;
                        }
                        break;
                    case WeaponType.MainHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon){
                            return equipitem;
                        }
                        break;
                    case WeaponType.SubHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon2){
                            return equipitem;
                        }
                        break;
                    case WeaponType.TwoHandedMelee:
                        if(equipitem.slotType == SlotType.Weapon){
                            return equipitem;
                        }
                        break;
                }
            }
            else{
                switch(item.itemData.armorPlaceType){
                    case ArmorPlaceType.Head:
                        if(equipitem.slotType == SlotType.Head){
                            return equipitem;
                        }
                        break;
                    case ArmorPlaceType.Body:
                        if(equipitem.slotType == SlotType.Body){
                            return equipitem;
                        }
                        break;
                    case ArmorPlaceType.Belt:
                        if(equipitem.slotType == SlotType.Belt){
                            return equipitem;
                        }
                        break;
                    case ArmorPlaceType.Accessory:
                        if(equipitem.slotType == SlotType.Accessory){
                            return equipitem;
                        }
                        break;
                    case ArmorPlaceType.Normal:
                        if(equipitem.slotType == SlotType.Normal){
                            return equipitem;
                        }
                        break;
                }
            }
        }
    return null;     
    }
*/
    
}
  
