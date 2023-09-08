using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquipTool : MonoBehaviour
{
    public float attckRate;
    public float damage;


    private Animator anim;
    private Camera cam;
    public bool doesGatherResources;
    public bool doesDealDamage;

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
