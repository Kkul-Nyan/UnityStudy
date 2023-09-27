using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class EquipInteract : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    InventoryController inventoryController;
    EquipSlot equipSlot;

    private void Awake() {
        inventoryController = FindObjectOfType(typeof(InventoryController)) as InventoryController;
        equipSlot = GetComponent<EquipSlot>();
    }
    public void OnPointerEnter(PointerEventData eventData)
    {
        inventoryController.selectedEquipSlot = equipSlot;
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        inventoryController.selectedEquipSlot.Show(false, false);
        inventoryController.selectedEquipSlot = null;
    }
}
