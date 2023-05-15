using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using UnityEngine.AI;

[System.Serializable]
public class DropItem {
    public ItemData dropitem;
    [Range(0,1)]
    public float dropPercent;
}

[EnumToggleButtons]
public enum AIType{
    Passive,
    Scared,
    Aggressive
}

[EnumToggleButtons]
public enum AIState{
    Idle,
    Wandering,
    Attacking,
    Fleeing
}



public class NPC : MonoBehaviour, IDamagable
{
    public NPCData data;

    [Title("Stats")]
    public int health;
    public float walkSpeed;
    public float runSpeed;
    public DropItem[] dropItems;


    [Title("AI")]
    public AIType aiType;
    public AIState aiState;
    public float detectDistance;
    public float safeDistance;

    [Title("Wandering")]
    public float minWanderDistance;
    public float maxWanderDistance;
    public float minWanderWaitTime;
    public float maxWanderWaitTime;

    [Title("Combat")]
    public int damage;
    public float attackRate;
    private float lastAttackTime;
    public float attackDistance;

    private float playerDistance;


    
    //components
    [HideInInspector]public NavMeshAgent agent;
    private Animator anim;
    private SkinnedMeshRenderer[] meshRenderers;


    void Awake(){
        agent = GetComponent<NavMeshAgent>();
        anim = GetComponentInChildren<Animator>();        

        meshRenderers = GetComponentsInChildren<SkinnedMeshRenderer>();

        agent.enabled = false;
    }
    private void Start() {
        SetState(AIState.Wandering);
        agent.enabled = true;
    }

    private void Update() {
        playerDistance = Vector3.Distance(transform.position, PlayerController06.instance.transform.position);

        anim.SetBool("Moving", aiState != AIState.Idle);

        switch(aiState){
            case AIState.Idle: PassiveUpdate(); break;
            case AIState.Wandering: PassiveUpdate(); break;
            case AIState.Attacking: AttackingUpdate(); break;
            case AIState.Fleeing: FleeingUpdate(); break;
        }
    }

    void PassiveUpdate(){
        if(aiState == AIState.Wandering && agent.remainingDistance < 0.1f){
            SetState(AIState.Idle);
            Invoke("WanderToNewLocation",Random.Range(minWanderWaitTime, maxWanderWaitTime));
        }
        if(aiType == AIType.Aggressive && playerDistance < detectDistance){
            SetState(AIState.Attacking);
        }
        else if (aiType == AIType.Scared && playerDistance < detectDistance){
            SetState(AIState.Fleeing);
            agent.SetDestination(GetFleeLocation());
        }
    }

    void AttackingUpdate(){
        if(playerDistance > attackDistance){
            agent.isStopped = false;
            agent.SetDestination(PlayerController06.instance.transform.position);
        }
        else{
            agent.isStopped = true;

            if(Time.time - lastAttackTime > attackRate){
                lastAttackTime = Time.time;
                PlayerController06.instance.GetComponent<IDamagable>().TakePhysicalDamage(damage);
                anim.SetTrigger("Attack");
            }

        }
    }

    void FleeingUpdate(){
        if(playerDistance < safeDistance && agent.remainingDistance < 0.1f){
            agent.SetDestination(GetFleeLocation());
        }
        else if (playerDistance > safeDistance){
            SetState(AIState.Wandering);
        }
    }

    void SetState(AIState newState){
        aiState = newState;

        switch(aiState){
            case AIState.Idle: {
                agent.speed = walkSpeed;
                agent.isStopped = true;
                break;
            }
            case AIState.Wandering : {
                agent.speed = walkSpeed;
                agent.isStopped = false;
                break;
            }
            case AIState.Attacking : {
                agent.speed = runSpeed; 
                agent.isStopped = false;
                break;
                }
            case AIState.Fleeing : {
                agent.speed = runSpeed; 
                agent.isStopped = false;
                break;
            }
        }
    }

    void WanderToNewLocation(){
        if(aiState != AIState.Idle){
            return;
        }
        SetState(AIState.Wandering);
        agent.SetDestination(GetWanderLocation());
         
    }

    Vector3 GetWanderLocation(){
        NavMeshHit hit;
        NavMesh.SamplePosition(transform.position + (Random.onUnitSphere * Random.Range(minWanderDistance, maxWanderWaitTime)), out hit, maxWanderDistance, NavMesh.AllAreas);
        
        int i = 0;

        while(Vector3.Distance(transform.position, hit.position) < detectDistance){
            NavMesh.SamplePosition(transform.position + (Random.onUnitSphere * Random.Range(minWanderDistance, maxWanderWaitTime)), out hit, maxWanderDistance, NavMesh.AllAreas);
        
            i++;

            if(i == 30){
                break;
            }
        }
        return hit.position;
    }

    Vector3 GetFleeLocation() {
        NavMeshHit hit;

        int i = 0;

        NavMesh.SamplePosition(transform.position + (Random.onUnitSphere * safeDistance), out hit, safeDistance, NavMesh.AllAreas);
        while(GetDestinationAngle(hit.position) > 90 || playerDistance < safeDistance){
            NavMesh.SamplePosition(transform.position + (Random.onUnitSphere * safeDistance), out hit, safeDistance, NavMesh.AllAreas);
            i++;
             if(i == 30){
                break;
             }
        }
        return hit.position;
    }

    float GetDestinationAngle(Vector3 targetPos){
        return Vector3.Angle(transform.position - PlayerController06.instance.transform.position, transform.position + targetPos );
    }
    public void TakePhysicalDamage(int damageamount){
        health -= damageamount;

        if(health <= 0){
            Die();
        }
        StartCoroutine(DamageFlash());

        if(aiType == AIType.Passive){
            SetState(AIState.Fleeing);
        }
    }
    void Die(){
        for(int x = 0; x <dropItems.Length; x++){
            float random = Random.Range(0f,1f);
            
            if(random >0 && random <= dropItems[x].dropPercent){
                if(dropItems[x].dropitem.type != ItemType.Equipable) {
                    int multi = Random.Range(0,3);
                    if(multi != 0){
                        for(int i = 0; i < multi; i++){
                            Instantiate(dropItems[x].dropitem.dropPrefab, transform.position, Quaternion.identity);
                        }
                    }
                }
                else{
                    Instantiate(dropItems[x].dropitem.dropPrefab, transform.position, Quaternion.identity);
                }
            }
        }

        Destroy(gameObject);
    }
    IEnumerator DamageFlash(){
        for(int x = 0; x < meshRenderers.Length; x++){
            meshRenderers[x].material.color = new Color( 1f, 0.6f, 0.6f);
        }
        yield return new WaitForSeconds(0.1f);

        for(int x = 0; x < meshRenderers.Length; x++){
            meshRenderers[x].material.color = Color.white;
        }
    }

}
