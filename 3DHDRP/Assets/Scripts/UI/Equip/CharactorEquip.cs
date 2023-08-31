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
}
  
