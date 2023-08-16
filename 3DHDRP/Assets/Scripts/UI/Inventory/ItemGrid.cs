using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemGrid : MonoBehaviour
{
    public float tileSizeWidth = 32;
    public float tileSizeHeight = 32;

    public int inventoryWidthCount;
    public int inventoryHeightCount;

    Inventory[,] inventoryItemSlot;

    RectTransform rectTransform;

    Vector2 positionTheGrid = new Vector2();
    Vector2Int tileGridPosition = new Vector2Int();
    void Start(){
        rectTransform = GetComponent<RectTransform>();
        Init(inventoryWidthCount, inventoryHeightCount);
    }

    private void Init(int width, int height)
    {
        inventoryItemSlot = new Inventory[width, height];
        Vector2 size = new Vector2(width * tileSizeWidth, height * tileSizeHeight);
        rectTransform.sizeDelta = size;
    }

    public Vector2 GetTileGridPosition(Vector2 mousePosition){
        positionTheGrid.x = mousePosition.x - rectTransform.position.x;
        positionTheGrid.y = rectTransform.position.y - mousePosition.y;

        tileGridPosition.x = (int)(positionTheGrid.x / tileSizeWidth);
        tileGridPosition.y = (int)(positionTheGrid.y / tileSizeHeight);

        return tileGridPosition;
    }

}
