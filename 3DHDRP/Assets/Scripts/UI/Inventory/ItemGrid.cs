using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.UIElements;

public class ItemGrid : MonoBehaviour
{
    public const float tileSizeWidth = 32;
    public const float tileSizeHeight = 32;

    [SerializeField] int gridWidthCount;
    public int GridWidthCount{
        get { return gridWidthCount; }
    }
    [SerializeField] int gridHeightCount;
    public int GridHeightCount{
        get { return gridHeightCount; }
    } 
    public InventoryItem[,] inventoryItemSlot;

    RectTransform rectTransform;

    Vector2 positionTheGrid = new Vector2();
    Vector2Int tileGridPosition = new Vector2Int();

    public Vector2 bgSize = new Vector2(40, 60);
    public Vector2 equipSize = new Vector2();

    public bool isMinimize = false;
    public bool includeEquip = false;
    
    void Start(){
        rectTransform = GetComponent<RectTransform>();
        Init(gridWidthCount, gridHeightCount);

    }

    
    //인벤토리 그리드 사이즈 초기화
    private void Init(int width, int height)
    {
        inventoryItemSlot = new InventoryItem[width, height];
        GirdSizeInit(width, height);
    }

    public void GirdSizeInit(int width, int height)
    {
        Vector2 size = new Vector2(width * tileSizeWidth, height * tileSizeHeight);
        rectTransform.sizeDelta = size;
    }

    //인벤토리 마우스포인터위치의 그리드 좌표 계산 Anchor를 기준으로생성 현재는 0,1기준
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
    public bool PlaceItem(InventoryItem inventoryItem, int posX, int posY, ItemGrid itemGrid, ref InventoryItem overlapItem)
    {
        if (BoundaryCheck(posX, posY, inventoryItem.WIDTH, inventoryItem.HEIGHT) == false)
        {
            return false;
        }

        if (OverlapCheck(posX, posY, inventoryItem.WIDTH, inventoryItem.HEIGHT, ref overlapItem) == false)
        {
            overlapItem = null;
            return false;
        }

        if (overlapItem != null)
        {
            CleanGridReference(overlapItem);
        }

        PlaceItem(inventoryItem, posX, posY, itemGrid);

        return true;
    }

    public void PlaceItem(InventoryItem inventoryItem, int posX, int posY, ItemGrid itemGrid)
    {
        RectTransform rectTransform = inventoryItem.GetComponent<RectTransform>();
        TextMeshProUGUI text = inventoryItem.GetComponentInChildren<TextMeshProUGUI>();
        text.enabled = true;
        rectTransform.SetParent(this.rectTransform);

        for (int x = 0; x < inventoryItem.WIDTH; x++)
        {
            for (int y = 0; y < inventoryItem.HEIGHT; y++)
            {
                inventoryItemSlot[posX + x, posY + y] = inventoryItem;
            }
        }

        inventoryItem.onGridPositionX = posX;
        inventoryItem.onGridPositionY = posY;
        inventoryItem.grid = itemGrid;
        inventoryItem.StackText();
        Vector2 position = CalulatePositionOnGrid(inventoryItem, posX, posY);

        rectTransform.localPosition = position;
    }

    public Vector2 CalulatePositionOnGrid(InventoryItem inventoryItem, int posX, int posY)
    {
        Vector2 position = new Vector2();
        position.x = posX * tileSizeWidth + tileSizeWidth * inventoryItem.WIDTH / 2;
        position.y = -(posY * tileSizeHeight + tileSizeHeight * inventoryItem.HEIGHT / 2);
        return position;
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

        TextMeshProUGUI text = toReturn.GetComponentInChildren<TextMeshProUGUI>();
        text.enabled = false;
        CleanGridReference(toReturn);
        return toReturn;
    }


    // 인벤토리 아이탬 좌표 삭제(예를들어 2X2아이탬이 삭제시 이 스크립트롤 통해 총 4칸의 아이탬슬롯 정보 초기화)
    private void CleanGridReference(InventoryItem item)
    {
        for (int ix = 0; ix < item.WIDTH; ix++)
        {
            for (int iy = 0; iy < item.HEIGHT; iy++)
            {
                inventoryItemSlot[item.onGridPositionX + ix, item.onGridPositionY + iy] = null;
            }
        }
    }


    #region 인벤토리 바운더리 확인 관련
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
    public bool BoundaryCheck(int posX, int posY, int width, int height){
        if(PositionCheck(posX, posY) == false){ return false; }

        posX += width - 1;
        posY += height - 1;

        if(PositionCheck(posX, posY) == false){ return false; }

        return true;
    }
    #endregion

    public InventoryItem GetItem(int x, int y)
    {
        return inventoryItemSlot[x, y];
    }
   
    public InventoryItem GetStackItem(ItemData itemData){
        for(int x = 0; x < gridWidthCount; x++){
            for(int y = 0; y < gridHeightCount; y++){
                if(inventoryItemSlot[x,y] != null){
                    InventoryItem inventoryItem = inventoryItemSlot[x,y];

                    if(inventoryItem.itemData == itemData){
                        return inventoryItem;
                    }

                }
            }
        }
        return null;
    }


    #region 인벤토리 빈공간 자동 확인 관련
    public Vector2Int? FindSpaceForObject(InventoryItem itemToInsert)
    {
        
        int height = gridHeightCount - itemToInsert.HEIGHT + 1;
        int width = gridWidthCount - itemToInsert.WIDTH + 1;

        for(int y = 0; y < height; y++){
            for(int x = 0; x < width; x++){
               if(CheckAvailableSpace(x, y, itemToInsert.WIDTH, itemToInsert.HEIGHT) == true){
                return new Vector2Int(x, y);
               }
            }
        }
        return null;
    }

    private bool CheckAvailableSpace(int posX, int posY, int width, int height)
    {
        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                if(inventoryItemSlot[posX + x, posY + y] != null){
                    
                    return false;
                        
                }
            }
        }
        return true;
    }
    #endregion

    
}
