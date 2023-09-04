using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class EquipItemManager : MonoBehaviour
{
    private ItemData weapon1;
    public ItemData Weapon1{
        get{ return Weapon1; }
        set{
            if( weapon1 != value ){
                OnChangeWeapon1(value);
                weapon2 = value;
            }
        }
    }

    private ItemData weapon2;
    public ItemData Weapon2{
        get{ return Weapon2; }
        set{
            if( weapon2 != value ){
                OnChangeWeapon2(value);
                weapon2 = value;
            }
        }
    }

    public EquipItem curWeapon1;
    public EquipItem curWeapon2;
    public Transform weapon1equipParent;
    public Transform weapon2equipParent;


    public void OnAttackInput(InputAction.CallbackContext context){
        curWeapon1.OnAttackInput();
    }

    public void OnAltAttackInput(InputAction.CallbackContext context){
        curWeapon1.OnAltAttackInput();
    }

    void OnChangeWeapon1(ItemData item){
        if( curWeapon1 != null ){ Destroy(curWeapon1.gameObject); }
        if(item.equipPrefab == null ){ return; }
        curWeapon1 = Instantiate(item.equipPrefab, weapon1equipParent).GetComponent<EquipItem>();
    }
    void OnChangeWeapon2(ItemData item){
        if( curWeapon2 != null ){ Destroy(curWeapon2.gameObject); }
        if(item.equipPrefab == null ){ return; }
        curWeapon2 = Instantiate(item.equipPrefab, weapon2equipParent).GetComponent<EquipItem>();
    }
}
