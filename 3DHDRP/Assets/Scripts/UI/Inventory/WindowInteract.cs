using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class WindowInteract : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    InventoryController inventoryController;
    [SerializeField]WindowController windowController;

    private void Awake() {
        inventoryController = FindObjectOfType(typeof(InventoryController)) as InventoryController;
        windowController = GetComponent<WindowController>();
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        inventoryController.selectedWindow = windowController;
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        inventoryController.selectedWindow = null;
    }
}
