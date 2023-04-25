using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingWindow : MonoBehaviour
{
    private void OnEnable() {
        Inventory.instance.onOpenInventory.AddListener(OnOpenInventory);
    }
    private void OnDisable() {
        Inventory.instance.onOpenInventory.RemoveListener(OnOpenInventory);
    }
    void OnOpenInventory() {
        gameObject.SetActive(false);
    }
}
