using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;


#region  enum모음

[EnumToggleButtons]
public enum ConsumableType {
    Health,
    Stamina,
    Mana,
    Hunger,
    Thirst,
    Sleep,
    Ammunition
}

[EnumToggleButtons]
public enum EquipType{
    Weapon,
    Armor
}

[EnumToggleButtons]
public enum WeaponType{
    BothHandedMelee,
    MainHandedMelee,
    SubHandedMelee,
    TwoHandedMelee
}

[EnumToggleButtons]
public enum ArmorType{
    Heavy,
    Middle,
    Light,
    Normal
}

[EnumToggleButtons]
public enum ArmorPlaceType{
    Head,
    Body,
    Belt,
    Accessory,
    Normal
}

[EnumToggleButtons]
public enum Quality{
    Worst,
    Poor,
    Average,
    Good,
    Excellent
}
#endregion

[CreateAssetMenu(fileName = "Item", menuName = "New Item Data")]
public class ItemData : ScriptableObject
{
    [Title("Info")]
    public string id;
    
    [PreviewField(80f, ObjectFieldAlignment.Center)]
    public GameObject dropPrefab;
    public string displayName;
    public string description;

    [Tooltip("물약 및 음식류일 경우")]
    public bool cunsumable;

    [Title("Inventory Info")]
    [PreviewField(100, ObjectFieldAlignment.Center)]
    public Sprite itemIcon;

    [PreviewField(100, ObjectFieldAlignment.Center)]
    public GameObject equipPrefab;

    [HorizontalGroup]
    public int width = 1;
    [HorizontalGroup]
    public int height = 1;

    [Title("CanStack")]
    [ShowIf("cunsumable")]
    [Tooltip("인벤토리상 중복이 가능한 경우 체크")]
    public bool canStack = false;

    [Tooltip("최대 중복 갯수")]
    [ShowIf("canStack")]
    [Range(0, 99)]
    public int maxStackAmount;

    
    [Title("ConsumableItem")]
    [Tooltip("ItemType에서 Consumable선택시 고르면 됩니다")]
    [ShowIf("cunsumable")]
    [HideReferenceObjectPicker]
    public ConsumableItemSetting[] consumable;

    [Title("Equip Setting")]
    [Tooltip("아이탬의 질입니다. Average기준으로 위는 가산, 밑으로 감가 포인트가 들어갑니다.")]
    public Quality quality;
    
    public EquipType equipType;

    [ShowIf("equipType", EquipType.Weapon)]
    [Tooltip("무기 타입을 선택시 고르면 됩니다.")]
    public WeaponType weaponType;

    [ShowIf("equipType", EquipType.Armor)]
    [Tooltip("방어구 타입을 선택시 고르면 됩니다.")]
    [HideReferenceObjectPicker]
    public ArmorType armorType;

    [ShowIf("equipType", EquipType.Armor)]
    [Tooltip("방어구 장착 부위를 고르면 됩니다.")]
    [HideReferenceObjectPicker]
    public ArmorPlaceType armorPlaceType;

    [Tooltip("Weapon의 경우, 최대공격력 중 최대값입니다. Armor의 경우, 최대방어력 중 최대값입니다.")]
    public int maxValue;
    [Tooltip("Weapon의 경우, 최대공격력 중 최소값입니다. Armor의 경우, 최대방어력 중 최소값입니다.")]
    public int minValue;

    [Tooltip("Melee의 경우, 공격속도입니다. LongRange의 경우, 소모량입니다")]
    public float secondValue;

    [Tooltip("아이탬의 최대내구력 중 최대값입니다.")]
    public float maxDurability;
    [Tooltip("아이탬의 최대내구력 중 최소값입니다.")]
    public float minDurability;
}

[System.Serializable]
public class ConsumableItemSetting
{
    public ConsumableType type;
    public float value;
}
