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
    [SerializeField] ItemData curEquipItem;

    Image image;
    Sprite originalSprite;

    private void Awake() {
        image = GetComponent<Image>();
        originalSprite = image.sprite;
    }

    public void EquipItem(InventoryItem item){
        curEquipItem = item.itemData;
        image.sprite = curEquipItem.itemIcon;
    }

    public void UnEquipItem(){
        curEquipItem = null;
        image.sprite = originalSprite;
    }
}
