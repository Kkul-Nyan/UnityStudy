using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;

public class InventoryController : MonoBehaviour
{
    
    private ItemGrid selectedItemGrid;

    public ItemGrid SelectedItemGrid
    {
        get => selectedItemGrid;
        set {
            selectedItemGrid = value;
            inventoryHighLight.SetParent(value);
        }
    }

  

    InventoryItem selectedItem;
    InventoryItem overlapItem;
    RectTransform rectTransform;

    [SerializeField] List<ItemData> items;
    [SerializeField] GameObject itemPrefab;
    [SerializeField] Transform gridTransform;

    Vector2Int oldPosition;
    InventoryHighLight inventoryHighLight;

    private void Awake() {
        inventoryHighLight = GetComponent<InventoryHighLight>();
    }
    void Update()
    {
        ItemIconDrag();
        
        if(Input.GetKeyDown(KeyCode.Q)){
            if(selectedItem == null){
                CreateRandomItem();
            }
        }
        if(Input.GetKeyDown(KeyCode.W)){
            InsertRandomItem();
        }

        if(Input.GetKeyDown(KeyCode.R)){
            RotateItem();
        }
        HandleHighlight(); 
        
    }

    private void RotateItem()
    {
        if(selectedItem == null){return;}
        selectedItem.Rotate();
    }

    private void InsertRandomItem()
    {
        if( selectedItemGrid == null){ return;}
        CreateRandomItem();
        InventoryItem itemToInsert = selectedItem;
        selectedItem = null;
        InsertListItem(itemToInsert);
    }

    private void InsertListItem(InventoryItem itemToInsert)
    {
        Vector2Int? posOnGrid = selectedItemGrid.FindSpaceForObject(itemToInsert);
        if(posOnGrid == null){ return;}

        selectedItemGrid.PlaceItem(itemToInsert, posOnGrid.Value.x, posOnGrid.Value.y);
    }

    InventoryItem itemToHighlight;

    //하이라이트를 켜고끄고, 마우스를 따라 기존의 아이탬과 함께 아이탬경계를 하이라이트로 보여줍니다.
    private void HandleHighlight()
    {
        Vector2Int positionOnGrid = GetTileGridPosition();

        if(oldPosition == positionOnGrid){return;}

        oldPosition = positionOnGrid;

        if(selectedItem == null){
            itemToHighlight = selectedItemGrid.GetItem(positionOnGrid.x, positionOnGrid.y);

            if(itemToHighlight != null){
                inventoryHighLight.Show(true);
                inventoryHighLight.SetSize(itemToHighlight);
                inventoryHighLight.SetPosition(selectedItemGrid, itemToHighlight);
            }
            else{
            inventoryHighLight.Show(false);
            }
        }
        else{
            //바운더리를 체크해서 바운더리 밖에서는 SetActive를 false 시켜서 작동 안하도록한다.
            inventoryHighLight.Show(selectedItemGrid.BoundaryCheck(
                positionOnGrid.x,
                positionOnGrid.y,
                selectedItem.WIDTH,
                selectedItem.HEIGHT
                ));
            inventoryHighLight.SetSize(selectedItem);
            inventoryHighLight.SetPosition(selectedItemGrid, selectedItem, positionOnGrid.x, positionOnGrid.y);
        }
    }

    private void CreateRandomItem()
    {
        InventoryItem inventoryItem = Instantiate(itemPrefab).GetComponent<InventoryItem>();
        selectedItem = inventoryItem;

        rectTransform = inventoryItem.GetComponent<RectTransform>();
        rectTransform.SetParent(gridTransform);
        rectTransform.SetAsLastSibling();

        int selectedItemId = UnityEngine.Random.Range(0, items.Count);
        inventoryItem.Set(items[selectedItemId]);
    }

    private void ItemIconDrag()
    {
        if (selectedItem != null)
        {
            //rectTransform.SetParent(gridTransform.GetComponent<RectTransform>());
            rectTransform.SetAsLastSibling();
            rectTransform.position = Input.mousePosition;
        }
    }

    //클릭시, 그리드라면, GridInteract를 통해 아이탬그리드가 null이 아닐경우 작동
    public void OnClickInventoyInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed)
        {
            if (selectedItemGrid == null) { 
                inventoryHighLight.Show(false);
                return;
            }
            LeftMouseButtonPress();
        }
    }

    private void LeftMouseButtonPress()
    {
        Vector2Int tileGridPosition = GetTileGridPosition();

        if (selectedItem == null)
        {
            PickUpItem(tileGridPosition);
        }
        else
        {
            PlaceItem(tileGridPosition);
        }
    }

    private Vector2Int GetTileGridPosition()
    {
        Vector2 position = Input.mousePosition;

        //아이탬을 놓을 위치를 아이탬의 중심을 기준으로 놓게됨(없을시, 좌상단이 기준)
        if (selectedItem != null)
        {
            position.x -= (selectedItem.WIDTH - 1) * ItemGrid.tileSizeWidth / 2;
            position.y += (selectedItem.HEIGHT - 1) * ItemGrid.tileSizeHeight / 2;
        }
       
        return selectedItemGrid.GetTileGridPosition(position);
    }

    private void PlaceItem(Vector2Int tileGridPosition)
    {
        bool complete = selectedItemGrid.PlaceItem(selectedItem, tileGridPosition.x, tileGridPosition.y, ref overlapItem);

        if(complete){
            selectedItem = null;
            if(overlapItem != null){
                selectedItem = overlapItem;
                overlapItem = null;
                rectTransform = selectedItem.GetComponent<RectTransform>();
                
            }
        }
    }

    private void PickUpItem(Vector2Int tileGridPosition)
    {
        selectedItem = selectedItemGrid.PickUpItem(tileGridPosition.x, tileGridPosition.y);
        if (selectedItem != null)
        {
            rectTransform = selectedItem.GetComponent<RectTransform>();
        }
    }
}
