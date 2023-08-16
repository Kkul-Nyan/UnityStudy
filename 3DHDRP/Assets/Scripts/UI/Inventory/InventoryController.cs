using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InventoryController : MonoBehaviour
{
    [HideInInspector]
    public ItemGrid selectedItemGrid;

    InventoryItem selectedItem;
    RectTransform rectTransform;

    [SerializeField] List<ItemData> items;
    [SerializeField] GameObject itemPrefab;
    [SerializeField] Transform gridTransform;
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Q)){
            CreateRandomItem();
        }
        ItemIconDrag();
    }

    private void CreateRandomItem()
    {
        InventoryItem inventoryItem = Instantiate(itemPrefab).GetComponent<InventoryItem>();
        selectedItem = inventoryItem;

        rectTransform = inventoryItem.GetComponent<RectTransform>();
        rectTransform.SetParent(gridTransform);

        int selectedItemId = UnityEngine.Random.Range(0, items.Count);
        inventoryItem.Set(items[selectedItemId]);
    }

    private void ItemIconDrag()
    {
        if (selectedItem != null)
        {
            rectTransform.position = Input.mousePosition;
        }
    }

    //클릭시, 그리드라면, GridInteract를 통해 아이탬그리드가 null이 아닐경우 작동
    public void OnClickInventoyInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed)
        {
            if (selectedItemGrid == null) { return; }
            LeftMouseButtonPress();
        }
    }

    private void LeftMouseButtonPress()
    {
        Vector2Int tileGridPosition = selectedItemGrid.GetTileGridPosition(Input.mousePosition);

        if (selectedItem == null)
        {
            PickUpItem(tileGridPosition);
        }
        else
        {
            PlaceItem(tileGridPosition);
        }
    }

    private void PlaceItem(Vector2Int tileGridPosition)
    {
        selectedItemGrid.PlaceItem(selectedItem, tileGridPosition.x, tileGridPosition.y);
        selectedItem = null;
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
