using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class EquipItemManager : EquipItem
{

    public EquipItem curEquip;
    public Transform equipParent;
    private PlayerController06 controller06;

    //singleton
    public static EquipItemManager instance;

    private void Awake() {
        instance = this;
        controller06 = GetComponent<PlayerController06>();
    }

    public void OnAttackInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed && curEquip != null && controller06.canLook == true){
            curEquip.OnAttackInput();
        }
    }
    public void OnAltAttackInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed && curEquip != null && controller06.canLook == true){
            curEquip.OnAltAttackInput();
        }
    }

    public void EquipNew(ItemData item){
        UnEquip();
        curEquip = Instantiate(item.equipPrefab, equipParent).GetComponent<EquipItem>(); 
    }

    public void UnEquip(){
        if(curEquip != null){
            Destroy(curEquip.gameObject);
            curEquip = null;
        }
    }
}
