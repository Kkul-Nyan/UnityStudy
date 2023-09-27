using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


[RequireComponent(typeof(ItemGrid))]
public class GridInteract : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    InventoryController inventoryController;
    ItemGrid itemGrid;

    private void Awake() {
        inventoryController = FindObjectOfType(typeof(InventoryController)) as InventoryController;
        itemGrid = GetComponent<ItemGrid>();
    }

    //마우스가 UI위에 있을때만, 그리드 체크
    public void OnPointerEnter(PointerEventData eventData)
    {
        inventoryController.SelectedItemGrid = itemGrid;
        inventoryController.selectedgrid = itemGrid.gameObject;
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        inventoryController.SelectedItemGrid = null;
    }
}
