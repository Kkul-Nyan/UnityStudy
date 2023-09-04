using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquipTool : EquipItem
{
    public float attckRate;
    public float damage;


    private Animator anim;
    private Camera cam;
    public bool doesGatherResources;
    public bool doesDealDamage;

    public override void OnAttackInput(){
        
    }
    public override void OnAltAttackInput(){
        
    }

    private void OnTriggerEnter(Collider other) {
        if(doesGatherResources){

        }
        else if(doesDealDamage){
            if(other.CompareTag("Enemy")){
                other.GetComponent<IDamagable>().TakePhysicalDamage(Mathf.FloorToInt(damage));
            }
        }
    }
}
