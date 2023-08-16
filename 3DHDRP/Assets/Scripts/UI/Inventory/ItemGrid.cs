using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemGrid : MonoBehaviour
{
    public const float tileSizeWidth = 32;
    public const float tileSizeHeight = 32;

    [SerializeField] int gridWidthCount;
    [SerializeField] int gridHeightCount; 

    InventoryItem[,] inventoryItemSlot;

    RectTransform rectTransform;

    Vector2 positionTheGrid = new Vector2();
    Vector2Int tileGridPosition = new Vector2Int();
    
    void Start(){
        rectTransform = GetComponent<RectTransform>();
        Init(gridWidthCount, gridHeightCount);
    }

    //인벤토리 그리드 사이즈 초기화
    private void Init(int width, int height)
    {
        inventoryItemSlot = new InventoryItem[width, height];
        Vector2 size = new Vector2(width * tileSizeWidth, height * tileSizeHeight);
        rectTransform.sizeDelta = size;
    }

    //인벤토리 각 그리드 좌표 생성 Anchor를 기준으로생성 현재는 0,1기준
    public Vector2Int GetTileGridPosition(Vector2 mousePosition){
        positionTheGrid.x = mousePosition.x - rectTransform.position.x;
        positionTheGrid.y = rectTransform.position.y - mousePosition.y;

        tileGridPosition.x = (int)(positionTheGrid.x / tileSizeWidth);
        tileGridPosition.y = (int)(positionTheGrid.y / tileSizeHeight);

        return tileGridPosition;
    }

    public void PlaceItem(InventoryItem inventoryItem, int posX, int posY){
        RectTransform rectTransform = inventoryItem.GetComponent<RectTransform>();
        rectTransform.SetParent(this.rectTransform);
        inventoryItemSlot[posX, posY] = inventoryItem;

        Vector2 position = new Vector2();
        position.x = posX * tileSizeWidth + tileSizeWidth * inventoryItem.itemData.width / 2;
        position.y =  -(posY * tileSizeHeight + tileSizeHeight * inventoryItem.itemData.height / 2);

        rectTransform.localPosition = position;
    }

    public InventoryItem PickUpItem(int x, int y)
    {
        InventoryItem toReturn = inventoryItemSlot[x,y];
        inventoryItemSlot[x ,y] = null;
        return toReturn;
    }
}
