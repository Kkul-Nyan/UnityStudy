using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float speed;
    public Rigidbody2D target;
    public RuntimeAnimatorController[] animCon;
    Animator anim;
    public float health;
    public float maxHealth;
    bool isLive;
    Rigidbody2D rigid;
    SpriteRenderer sprite;


    void Awake() 
    {
        anim = GetComponent<Animator>();
        rigid = GetComponent<Rigidbody2D>();
        sprite = GetComponent<SpriteRenderer>();
    }
    private void FixedUpdate() 
    {
        if(!isLive)
            return;
        
        Vector2 dirVec = target.position - rigid.position;
        Vector2 nextVec = dirVec.normalized * speed * Time.fixedDeltaTime;
        rigid.MovePosition(rigid.position + nextVec);
        rigid.velocity = Vector2.zero;
    }

    private void LateUpdate() 
    {
        sprite.flipX = target.position.x < rigid.position.x;
    }
    private void OnEnable() {
        target = GameManager.instance.player.GetComponent<Rigidbody2D>();
        isLive = true;
        health = maxHealth;
    }

    public void Init(SpawnData spawnData){
        anim.runtimeAnimatorController =  animCon[spawnData.spriteType];
        speed = spawnData.speed;
        maxHealth = spawnData.health;
        health = maxHealth;
    }
}
