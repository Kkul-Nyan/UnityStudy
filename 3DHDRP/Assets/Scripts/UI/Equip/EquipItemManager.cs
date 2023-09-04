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
                OnChangeWeapon1();
            }
        }
    }

    private ItemData weapon2;
    public ItemData Weapon2{
        get{ return Weapon2; }
        set{
            if( weapon2 != value ){
                OnChangeWeapon2();
            }
        }
    }

    public EquipItem curWeapon1;
    public EquipItem curWeapon2;
    public Transform equipParent;

    public void OnAttackInput(InputAction.CallbackContext context){
        curWeapon1.OnAttackInput();
    }

    public void OnAltAttackInput(InputAction.CallbackContext context){
        curWeapon1.OnAltAttackInput();
    }

    void OnChangeWeapon1(){
        Debug.Log("ChangeWeapon1");
    }
    void OnChangeWeapon2(){
        Debug.Log("ChangeWeapon2");
    }
}
