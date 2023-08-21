using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryHighLight : MonoBehaviour
{
    [SerializeField] RectTransform highlighter;

    public void SetSize(InventoryItem targetItem){
        Vector2 size =  new Vector2();
        size.x = targetItem.itemData.width * ItemGrid.tileSizeWidth;
        size.y = targetItem.itemData.height * ItemGrid.tileSizeHeight;

        highlighter.sizeDelta = size;
    }

    public void SetPosition(ItemGrid targetGrid, InventoryItem targetItem){
        highlighter.SetParent(targetGrid.GetComponent<RectTransform>());

        Vector2 pos = targetGrid.CalulatePositionOnGrid(
            targetItem,
            targetItem.onGridPositionX,
            targetItem.onGridPositionY
            );
        
        highlighter.localPosition = pos; 
        
    }
}
