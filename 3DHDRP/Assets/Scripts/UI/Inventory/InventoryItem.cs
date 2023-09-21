using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Sirenix.OdinInspector;

public class InventoryItem : MonoBehaviour
{
    public ItemData itemData;
    public int quantity;
    public int onGridPositionX;
    public int onGridPositionY;
    public ItemGrid grid;

    public bool rotated = false;

    public int HEIGHT{
        get{
            if(rotated == false){
                return itemData.height;
            }
            return itemData.width;
        }
    }

    public int WIDTH{
        get{
            if(rotated == false){
                return itemData.width;
            }
            return itemData.height;
        }
    }


    public void Set(ItemData itemData, int quantity = 0)
    {
        this.itemData = itemData;
        GetComponent<Image>().sprite = itemData.itemIcon;

        Vector2 size = new Vector2();
        size.x = itemData.width * ItemGrid.tileSizeWidth;
        size.y = itemData.height * ItemGrid.tileSizeHeight;
        GetComponent<RectTransform>().sizeDelta = size;

        if(itemData.canStack){

        }
        else{

        }
        this.quantity = quantity;
        StackText();
    }

    public void StackText()
    {
        TextMeshProUGUI text = GetComponentInChildren<TextMeshProUGUI>();
        text.text = quantity > 1 ? quantity.ToString() : string.Empty;
    }

    public int StackObject(int addInt){
        int total = 0;
        total = quantity + addInt;
        if(total <= itemData.maxStackAmount){
            Debug.Log(itemData.displayName);
            quantity = total;
            StackText();
            return 0;
        }
        else{
            total -= itemData.maxStackAmount;
            quantity = itemData.maxStackAmount;
            StackText();

            return total;
        }

    }


    internal void Rotate()
    {
        rotated = !rotated;
        RectTransform rectTransform= GetComponent<RectTransform>();
        rectTransform.rotation = Quaternion.Euler(0,0, rotated == true ? 90f : 0f); 
    }

    
}
