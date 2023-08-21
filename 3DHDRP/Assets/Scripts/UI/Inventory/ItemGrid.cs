using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

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
    //인벤토리에 선택된 아이탬을 드랍할 경우
    //인벤토리 바운더리 이내일경우 작동합니다.
    //클릭한 위치에 다른 아이탬이 존재할 경우, 그위치에 선택된아이탬을 나두고, 오버랩된 아이탬을 선택아이탬으로 교체합니다.
    public bool PlaceItem(InventoryItem inventoryItem, int posX, int posY, ref InventoryItem overlapItem)
    {
        if(BoundaryCheck(posX, posY, inventoryItem.itemData.width, inventoryItem.itemData.height) == false){
            return false;
        }

        if(OverlapCheck(posX, posY, inventoryItem.itemData.width, inventoryItem.itemData.height, ref overlapItem) == false){
            overlapItem = null;
            return false;
        }

        if(overlapItem != null){
            CleanGridReference(overlapItem);
        }

        RectTransform rectTransform = inventoryItem.GetComponent<RectTransform>();
        rectTransform.SetParent(this.rectTransform);

        for(int x = 0; x < inventoryItem.itemData.width; x++){
            for(int y = 0; y < inventoryItem.itemData.height; y++){
                inventoryItemSlot[posX + x, posY + y] = inventoryItem;
            }
        }

        inventoryItem.onGridPositionX = posX;
        inventoryItem.onGridPositionY = posY;

        Vector2 position = new Vector2();
        position.x = posX * tileSizeWidth + tileSizeWidth * inventoryItem.itemData.width / 2;
        position.y =  -(posY * tileSizeHeight + tileSizeHeight * inventoryItem.itemData.height / 2);

        rectTransform.localPosition = position;

        return true;
    }

    // 오버랩되는 아이탬이 있는지를 확인합니다.
    private bool OverlapCheck(int posX, int posY, int width, int height, ref InventoryItem overlapItem)
    {
        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                if(inventoryItemSlot[posX + x, posY + y] != null){
                    if(overlapItem == null){
                        overlapItem = inventoryItemSlot[posX + x, posY + y];
                    }
                    else{
                        if(overlapItem != inventoryItemSlot[posX + x, posY + y]){
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
    //인벤토리에 넣거나 위치를 옮길 아이탬을 선택합니다.
    public InventoryItem PickUpItem(int x, int y)
    {
        InventoryItem toReturn = inventoryItemSlot[x, y];

        if (toReturn == null) { return null; }

        CleanGridReference(toReturn);
        return toReturn;
    }

    private void CleanGridReference(InventoryItem item)
    {
        for (int ix = 0; ix < item.itemData.width; ix++)
        {
            for (int iy = 0; iy < item.itemData.height; iy++)
            {
                inventoryItemSlot[item.onGridPositionX + ix, item.onGridPositionY + iy] = null;
            }
        }
    }

    // 단순히 아이탬의 기준좌표가 인벤토리 바운더리 이내인지 이외인지 체크합니다.
    bool PositionCheck(int posX, int posY){
        if(posX < 0 || posY < 0){
            return false;
        }
        if(posX >= gridWidthCount || posY >= gridHeightCount){
            return false;
        }
        return true;
    }
    // 아이탬의 기준점에 대칭되는 가장먼 좌표를 기준으로 인벤토리 바운더리 이내인지 이외인지 체크합니다.
    bool BoundaryCheck(int posX, int posY, int width, int height){
        if(PositionCheck(posX, posY) == false){ return false; }

        posX += width - 1;
        posY += height - 1;

        if(PositionCheck(posX, posY) == false){ return false; }

        return true;
    }    
}
