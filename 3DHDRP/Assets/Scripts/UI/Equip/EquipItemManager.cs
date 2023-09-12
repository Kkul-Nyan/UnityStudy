using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
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
    bool attacking;

    float checkTime = 0.2f;
    float clickTime = 0f;
    bool isClick;
    Animator anim;

    private void Awake() {
        playerController = GetComponent<PlayerController>();
        anim = GetComponentInChildren<Animator>();
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

    public void OnAttackInput(InputAction.CallbackContext context){
          
          if(context.phase == InputActionPhase.Performed && playerController.CanLook){
               isClick = true;
               clickTime = 0;
               StartCoroutine(CheckPressOrHold());
          }
          else if(context.phase == InputActionPhase.Canceled && playerController.CanLook){
               isClick = false;
               StopCoroutine(CheckPressOrHold());
               OnAttack(clickTime);
          }
    }    
    IEnumerator CheckPressOrHold(){
        while(isClick){
            clickTime += Time.deltaTime;
            
            yield return new WaitForEndOfFrame();
        }
    }

    public void OnAttack(float clickTime){
        Debug.Log("1");
        if(clickTime < checkTime){
            if(!playerController.BattleMode){
                anim.SetLayerWeight(2,1);
                playerController.BattleMode = true;
                Debug.Log("2");
            }
            else if(playerController.BattleMode){
                if(!attacking){
                    Debug.Log("3");
                    attacking = true;
                    anim.SetTrigger("Attack");
                    Invoke("OnCanAttack", curWeapon1.attckRate);
                }
            }
        }
        else{
            Debug.Log("4");
        }
    }
    void OnCanAttack(){
        attacking = false;
        //anim.SetTrigger("Attack", false);
    }

    public void OnAltAttack(){
        if(curWeapon1 == null){ return; }
        
    }


}
