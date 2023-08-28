using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonController : MonoBehaviour
{
    InventoryController inventoryController;

    private void Start() {
        inventoryController = FindObjectOfType<InventoryController>();
    }

    public void CloseCanvas(){
        inventoryController.CheckClose();
    }
}
