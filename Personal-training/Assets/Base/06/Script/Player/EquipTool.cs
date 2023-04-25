using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class EquipTool : EquipItem
{
    [Title("Attack Info")]
    [GUIColor(1f, 0.6f, 0.4f, 1f )]public float attckRate;
    private bool attacking;
    [GUIColor(1f, 0.6f, 0.4f, 1f )]public float attackDistance;

    [Title("Resource Gathering")]
    public bool doesGatherResources;

    [Title("Combat")]
    public bool doesDealDamage;
    public int damage;

    //components;
    private Animator anim;
    private Camera cam;

    private void Awake() {
        anim = GetComponent<Animator>();
        cam = Camera.main;
    }
    public override void OnAttackInput()
    {
        if(!attacking){
            attacking = true;
            anim.SetTrigger("Attack");
            Invoke("OnCanAttack", attckRate);
        }
    }

    void OnCanAttack(){
        attacking = false;
    }

    public void OnHit(){
        Ray ray = cam.ScreenPointToRay( new Vector3(Screen.width /2 ,Screen.height / 2, 0));
        RaycastHit hit;

        if(Physics.Raycast(ray ,out hit, attackDistance)){
            if(doesGatherResources && hit.collider.GetComponent<Resource>()){
                hit.collider.GetComponent<Resource>().Gather(hit.point, hit.normal);
            }
            if(doesDealDamage && hit.collider.GetComponent<IDamagable>() != null){
                hit.collider.GetComponent<IDamagable>().TakePhysicalDamage(damage);
            }
        }
    }
}
