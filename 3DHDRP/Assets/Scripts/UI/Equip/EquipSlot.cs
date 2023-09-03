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
    Image backgroundImage;
    Sprite bgOrginalSprite;


    private void Awake() {
        image = GetComponent<Image>();
        originalSprite = image.sprite;
        backgroundImage = transform.parent.GetChild(0).GetComponent<Image>();
        Debug.Log(backgroundImage.name);
        bgOrginalSprite = backgroundImage.sprite;
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
