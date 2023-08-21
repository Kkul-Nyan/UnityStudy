using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

[EnumToggleButtons]
public enum ItemType{
    Resource,
    Equipable,
    Consumable
}

[EnumToggleButtons]
public enum ConsumableType {
    Health,
    Stamina,
    Mana,
    Hunger,
    Thirst,
    Sleep
}

[CreateAssetMenu(fileName = "Item", menuName = "New Item Data")]
public class ItemData : ScriptableObject
{
    public string id;
    [BoxGroup("Info")]public string displayName;
    [BoxGroup("Info")]public string description;
    [BoxGroup("Info")]public ItemType type;

    [BoxGroup("Info")][PreviewField(100, ObjectFieldAlignment.Center)]public Sprite itemIcon;

    [BoxGroup("Info")]public int width = 1;
    [BoxGroup("Info")]public int height = 1;

    [BoxGroup("Info")]public GameObject dropPrefab;

    
    [BoxGroup("Stacking")]public bool canStack;
    [BoxGroup("Stacking")]public int maxStackAmount;

    [BoxGroup("Consumable")]
    public ItemDataConsumable[] consumable;

    [BoxGroup("Equip")]
    public GameObject equipPrefab;
}

[System.Serializable]
public class ItemDataConsumable
{
    public ConsumableType type;
    public float value;
}