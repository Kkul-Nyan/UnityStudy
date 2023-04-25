using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public int health;
    public int maxhealth;
    float hAxis;
    float vAxis;
    bool wDown;
    public float speed;

    bool jDown;
    float jPower = 20;
    public bool isJump;
    public bool isDodge;

    Vector3 moveVec;
    Vector3 dodgeVec;
    Rigidbody rb;
    Animator anim;

    private Weapon weapon;

    public float gravity;
    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    void Start()
    {
        weapon = GameObject.Find("Player").GetComponent<Weapon>();
        anim = GetComponentInChildren<Animator>();
        Physics.gravity = Vector3.down * gravity;
    }

    // Update is called once per frame
    void Update()
    {
        GetInput();
        BasicMove();
        Turn();
        Jump();
        Dodge();
    }

    void GetInput()
    {
        hAxis = Input.GetAxisRaw("Horizontal");
        vAxis = Input.GetAxisRaw("Vertical");
        wDown = Input.GetButton("Walk");
        jDown = Input.GetButtonDown("Jump");

    }
    void BasicMove()
    {
      
        moveVec = new Vector3(hAxis, 0, vAxis).normalized;

        if(isDodge)
        {
             moveVec = dodgeVec;
        }
        if(weapon.isSwap && !weapon.isFireReady)
        {
            moveVec = Vector3.zero;
        }

        transform.position += moveVec * speed * (wDown ? 0.3f : 1f) * Time.deltaTime;

        anim.SetBool("isRun", moveVec != Vector3.zero);
        anim.SetBool("isWalk", wDown);

    }

    void Turn()
    {
        transform.LookAt(transform.position + moveVec);
    }
    void Jump()
    {
        if (jDown && moveVec == Vector3.zero  && !isJump && !isDodge && !weapon.isSwap)
        {
            rb.AddForce(Vector3.up * jPower, ForceMode.Impulse);
            anim.SetTrigger("doJump");
            anim.SetBool("isJump", true);
            isJump = true;
        }
    }

    void Dodge()
    {
        if (jDown && moveVec != Vector3.zero && !isJump && !isDodge && !weapon.isSwap)
        {
            isDodge = true;
            dodgeVec = moveVec;
            speed *= 2;
            rb.AddForce(Vector3.up * jPower, ForceMode.Impulse);
            anim.SetTrigger("doDodge");
            Invoke("DodgeOut", 1.2f);
        }
    }
    void DodgeOut()
    {
        speed *= .5f;
        isDodge = false;
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Floor")
        {
            anim.SetBool("isJump", false);
            isJump = false;

        }
    }
}
