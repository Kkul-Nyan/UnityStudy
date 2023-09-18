using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class BackGroundInteract : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{

    InventoryController inventoryController;

    void Start()
    {
        inventoryController = FindObjectOfType(typeof(InventoryController)) as InventoryController;
    }
    public void OnPointerEnter(PointerEventData eventData)
    {
        inventoryController.isBackGroundCanvas = true;
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        inventoryController.isBackGroundCanvas = false;
    }

 
}
