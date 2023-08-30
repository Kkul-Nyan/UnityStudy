using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;


#region  enum모음
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
    Sleep,
    Ammunition
}

[EnumToggleButtons]
public enum WeaponType{
    OneHandedMelee,
    TwoHandedMelee,
    DefenseMelee,
    LongRange
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
#endregion

[CreateAssetMenu(fileName = "Item", menuName = "New Item Data")]
public class ItemData : ScriptableObject
{
    [BoxGroup("ItemType")]
    [HideIf("isConsumable")]
    [Button("NotConsumable")]
    [Tooltip("소모품일 경우 클릭해주세요")]
    public void Consumable() => this.isConsumable = !this.isConsumable;
     
    [BoxGroup("ItemType")]
    [ShowIf("isConsumable")]
    [Button("Consumable"), GUIColor(0, 1, 0)]
    [Tooltip("소모품을 선택했습니다")]
    private void NotConsumable() => this.isConsumable = !this.isConsumable;
    
    [BoxGroup("ItemType")]
    [HideIf("isEquip")]
    [Button("NotEquip")]
    [Tooltip("장비아이탬일 경우 클릭해주세요")]
    public void Equip() => this.isEquip = !this.isEquip;
    
    [BoxGroup("ItemType")]
    [ShowIf("isEquip")]
    [Button("Equip"), GUIColor(0, 1, 0)]
    [Tooltip("장비아이탬을 선택했습니다")]
    private void notEquip() => this.isEquip = !this.isEquip;
    

    [BoxGroup("ItemType")]
    [HideIf("isResource")]
    [Button("NotResource")]
    [Tooltip("재료아이탬일 경우 클릭해주세요")]
    public void Resource() => this.isResource = !this.isResource;
    

    [BoxGroup("ItemType")]
    [ShowIf("isResource")]
    [Button("Resource"), GUIColor(0, 1, 0)]
    [Tooltip("재료아이탬을 선택했습니다")]
    private void NotResource() => this.isResource = !this.isResource;

    bool isConsumable;
    bool isEquip;
    bool isResource;

    [Title("Info")]
    public string id;
    
    [PreviewField(80f, ObjectFieldAlignment.Center)]
    public GameObject dropPrefab;
    public string displayName;
    public string description;
    public ItemType type;

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
    [Tooltip("인벤토리상 중복이 가능한 경우 체크")]
    public bool canStack = false;

    [Tooltip("최대 중복 갯수")]
    [ShowIf("canStack")]
    [Range(0, 99)]
    public int maxStackAmount;

    
    [Title("ConsumableItem")]
    [Tooltip("ItemType에서 Consumable선택시 고르면 됩니다")]
    [ShowIf("isConsumable")]
    [HideReferenceObjectPicker]
    public ConsumableItemSetting[] consumable;

    [Title("EquipItem")]
    [Tooltip("ItemType에서 Equip선택시 고르면 됩니다")]
    [ShowIf("isEquip")]
    [HideReferenceObjectPicker]
    public EquipItemSetting equipItemSetting;
}

[System.Serializable]
public class ConsumableItemSetting
{
    public ConsumableType type;
    public float value;
}

[System.Serializable]
public class EquipItemSetting{
    bool isWeapon;
    
    bool isArmor;

    [ButtonGroup]
    [HideIf("isWeapon")]
    [Button("NotWeapon")]
    [Tooltip("무기류일 경우 선택해주세요")]
    public void Weapon(){
        this.isWeapon = !this.isWeapon;
        if(isArmor){
            isArmor = false;
        }
    }
    
    [ButtonGroup]
    [ShowIf("isWeapon")]
    [Button("Weapon"), GUIColor(0, 1, 0)]
    [Tooltip("무기류를 선택했습니다")]
    private void NotWeapon()
    {
        this.isWeapon = !this.isWeapon;
    } 

    [ButtonGroup]
    [HideIf("isArmor")]
    [Button("NotArmor")]
    [Tooltip("방어구일 경우 선택해주세요")]
    public void Armor(){
        this.isArmor = !this.isArmor;
        if(isWeapon){
            isWeapon = false;
        }
    }
    
    [ButtonGroup]
    [ShowIf("isArmor")]
    [Button("isArmor"), GUIColor(0, 1, 0)]
    [Tooltip("방어구를 선택했습니다")]
    private void NotArmor()
    {
        this.isArmor = !this.isArmor;
    }       
    
    [ShowIf("isWeapon")]
    [Tooltip("근거리무기일 경우 Melee, 원거리공격일 경우, LongRange를 선택하면됩니다.")]
    public WeaponType weaponType;
    
    [ShowIf("isArmor")]
    [Tooltip("방어구 타입을 선택시 고르면 됩니다.")]
    public ArmorType armorType;

    [ShowIf("isArmor")]
    [Tooltip("방어구 장착 부위를 고르면 됩니다.")]
    public ArmorPlaceType armorPlaceType;

    [Tooltip("Weapon의 경우, 최대공격력 중 최대값입니다. Armor의 경우, 최대방어력 중 최대값입니다.")]
    public int maxValue;
    [Tooltip("Weapon의 경우, 최대공격력 중 최소값입니다. Armor의 경우, 최대방어력 중 최소값입니다.")]
    public int minValue;

    [ShowIf("isWeapon")]
    [Tooltip("Melee의 경우, 공격속도입니다. LongRange의 경우, 소모량입니다")]
    public float secondValue;

    [Tooltip("아이탬의 최대내구력 중 최대값입니다.")]
    public float maxDurability;
    [Tooltip("아이탬의 최대내구력 중 최소값입니다.")]
    public float minDurability;
}