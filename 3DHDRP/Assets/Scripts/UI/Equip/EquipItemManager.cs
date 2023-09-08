using System;
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
                weapon1 = value;
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

    public EquipTool curWeapon1;
    public EquipTool curWeapon2;
    public Transform weapon1equipParent;
    public Transform weapon2equipParent;

    PlayerController playerController;

    private void Awake() {
        playerController = GetComponent<PlayerController>();
    }

    private void Start() {
        playerController.Attack += OnAttack;
    }

    public void OnAttack(){
       //if(curWeapon1 == null){ return; }
        Debug.Log("Attack");
    }

    public void OnAltAttack(){
        if(curWeapon1 == null){ return; }
        
    }

    void OnChangeWeapon1(ItemData item = null ){
        if( curWeapon1 != null ){ Destroy(curWeapon1.gameObject); }
        if(item != null ){
            curWeapon1 = Instantiate(item.equipPrefab, weapon1equipParent).GetComponent<EquipTool>();
        }
    }
    void OnChangeWeapon2(ItemData item = null ){
        if( curWeapon2 != null ){ Destroy(curWeapon2.gameObject); }
        if(item != null ){
            curWeapon2 = Instantiate(item.equipPrefab, weapon2equipParent).GetComponent<EquipTool>();
        }
    }
}
