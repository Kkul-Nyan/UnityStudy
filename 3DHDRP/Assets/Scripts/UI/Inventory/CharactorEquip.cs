using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharactorEquip : MonoBehaviour
{
    private EquipSlot[] equipSlots;
    void Start()
    {
        equipSlots = GetComponentsInChildren<EquipSlot>();
        for (int i = 0; i < equipSlots.Length; i++){
            Debug.Log(equipSlots[i].slotType);
        }
    }

    public void EquipItem()
    {
        throw new NotImplementedException();
    }
}
  
