using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityEngine.Purchasing.MiniJSON;

public class PlayerMove : MonoBehaviour
{
    public float speed = 1;
    private float jumpPower = 1;
    float hAxis;
    float vAxis;
    float rayRange = 10;
    Vector3 moveVec;
    public Camera userCamera;

    public PlayerManager playerManager;

    Rigidbody playerRb;

    public GameObject CatWheel;
    bool OnAnimation = false;


    void Start()
    {
        playerRb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        Getinput();
        Move();
        Jump();
        RayShoot();
        CameraOption();
    }
    void Getinput()
    {
        hAxis = Input.GetAxisRaw("Horizontal");
        vAxis = Input.GetAxisRaw("Vertical"); 
    }

    void CameraOption()
    {
        Vector3 vector = new Vector3(0, 3, -4);
        if(hAxis != 0 || vAxis != 0)
        {
            userCamera.transform.localPosition = userCamera.transform.position;
        }
        else
        {
            userCamera.transform.position = transform.position + vector;
        }

    }
    void Move()
    {
        moveVec = new Vector3(hAxis, 0, vAxis).normalized;
        transform.position += moveVec * speed * Time.deltaTime;
    }

    void Jump()
    {
        if (Input.GetButtonDown("Jump"))
        {
            playerRb.AddForce(Vector3.up * jumpPower, ForceMode.Impulse);
        }
    }

    void RayShoot()
    {
        if(Input.GetMouseButtonDown(0))
        {
            Animator anim = CatWheel.GetComponent<Animator>();
            Debug.Log(anim.GetBool("OnAnimation"));
            Debug.DrawRay(transform.position, transform.forward * rayRange, Color.blue, 0.3f);
            RaycastHit hit;
            if (Physics.Raycast(transform.position, transform.forward, out hit, rayRange) && OnAnimation == false )
            {
                OnAnimation = true;
                anim.SetBool("OnAnimation", true);
                Debug.Log("hit");
                //hit.transform.localScale *= 2;
            }
            else if(Physics.Raycast(transform.position, transform.forward, out hit, rayRange) && OnAnimation == true)
            {
                OnAnimation = false;
                anim.SetBool("OnAnimation", false);
                Debug.Log("hitout");
               // hit.transform.localScale *= 1/2;
            }
        }
    }
}
 