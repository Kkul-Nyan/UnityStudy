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
    [SerializeField]float clickTime = 0f;
    bool isClick;

    bool combo;
    bool combo1;
    bool combo2;
    bool combo3;

    float cooldownTime = 2f;
    float nextfireTime = 0f;
    public static int noOfClicks;
    float lastClickedTime = 0f;
    float maxComboDelay = 1f;



    Animator anim;

    private void Awake() {
        playerController = GetComponent<PlayerController>();
        anim = GetComponentInChildren<Animator>();
    }

    private void Update() {
        
            
            if(anim.GetCurrentAnimatorStateInfo(0).IsName("Attack") && anim.GetCurrentAnimatorStateInfo(0).normalizedTime > 0.9f && !anim.GetNextAnimatorStateInfo(0).IsName("Combo1")){
                anim.SetBool("Attack",false);
                attacking = false;
            }
            else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Combo1") && anim.GetCurrentAnimatorStateInfo(0).normalizedTime > 0.9f && !anim.GetNextAnimatorStateInfo(0).IsName("Combo2")){
                anim.SetBool("Combo1",false);
                attacking = false;
            }
            else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Combo2") && anim.GetCurrentAnimatorStateInfo(0).normalizedTime > 0.9f && !anim.GetNextAnimatorStateInfo(0).IsName("Combo3")){
                anim.SetBool("Combo2",false);
                attacking = false;
            }
            else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Combo3") && anim.GetCurrentAnimatorStateInfo(0).normalizedTime > 0.9f){
                anim.SetBool("Combo3",false);
                attacking = false;
            }
        
        
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
                    
                    

                    float animTime;
                    if(curWeapon1 == null){
                        animTime = 1f; 
                    }
                    else{
                        animTime = curWeapon1.attckRate;
                    }

                    Combo();
                    
                }
                else if(attacking){
                    Combo();
                }
            }
        }
        else{
            Debug.Log("4");
        }
    }

    void Combo(){
        //CancelInvoke("ResetCombo");

        if(anim.GetCurrentAnimatorStateInfo(0).IsName("Idle")){
            Debug.Log("1111");
            anim.SetBool("Attack",true);
        }
        else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Attack")){
            Debug.Log("2222");
            anim.SetBool("Attack",false);
            anim.SetBool("Combo1",true);
        }
        else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Combo1")){
            Debug.Log("3333");
            anim.SetBool("Combo1",false);
            anim.SetBool("Combo2",true);
        }
        else if(anim.GetCurrentAnimatorStateInfo(0).IsName("Combo2")){
            Debug.Log("4444");
            anim.SetBool("Combo2",false);
            anim.SetBool("Combo3",true);
        }
    }
    void ResetCombo(){
        attacking = false;
        combo = false;
        combo1 = false;
        combo2 = false;
        combo3 = false;

        anim.SetBool("Attack",false);
        anim.SetBool("Combo1",false);
        anim.SetBool("Combo2",false);
        anim.SetBool("Combo3",false);
    }

    public void OnAltAttack(){
        if(curWeapon1 == null){ return; }
        
    }


}
