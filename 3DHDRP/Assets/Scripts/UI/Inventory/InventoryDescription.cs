using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Sirenix.OdinInspector;

public class InventoryDescription : MonoBehaviour
{
    [SerializeField] RectTransform descriptionUI;
    [SerializeField] TextMeshProUGUI nameText;
    [SerializeField] TextMeshProUGUI descriptiveText;
    ItemType itemType;

    [Button]
    public void Show(bool a){
        descriptionUI.gameObject.SetActive(a);
    }

    public void SetPosition(){
        Vector2 mousePos = Input.mousePosition;
        Vector2 size = descriptionUI.sizeDelta / 2;
        descriptionUI.position = new Vector2(mousePos.x + size.x, mousePos.y + size.y);
    }

    public void SetDesciption(InventoryItem item){
        nameText.text = item.itemData.displayName;
        descriptiveText.text = item.itemData.description;
        itemType = item.itemData.type;
        switch (itemType){
            case ItemType.Resource:
                Debug.Log("Resource");
                break;
            case ItemType.Equipable:
                Debug.Log("Equipable");
                break;
            case ItemType.Consumable:
                Debug.Log("Consumable");
                break;
        }
    }
}