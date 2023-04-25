using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Player : MonoBehaviour
{
    public Vector2 inputVec;
    public float speed;
    Rigidbody2D playerRigid;
    SpriteRenderer sprite;
    Animator animator;

    void Awake()
    {
        playerRigid = GetComponent<Rigidbody2D>();
        sprite = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
    }
    void Start()
    {
        
    }

    void Update()
    {
        
    }
    void FixedUpdate()
    {
        Vector2 nextVec = inputVec * speed * Time.fixedDeltaTime ;
        // 힘을 준다.
        //playerRigid.AddForce(inputVec);
        // 속도 제어
        //playerRigid.velocity = inputVec;
        // 위치 이동
        playerRigid.MovePosition(playerRigid.position + nextVec);
    }
    void LateUpdate()
    {
        animator.SetFloat("Speed",inputVec.magnitude);
        if(inputVec.x != 0){
            sprite.flipX = inputVec.x < 0;
        }
    }

    void OnMove(InputValue value)
    {
        inputVec = value.Get<Vector2>();
    }
    void Move()
    {
        inputVec.x = Input.GetAxisRaw("Horizontal");
        inputVec.y = Input.GetAxisRaw("Vertical");
    }

}
