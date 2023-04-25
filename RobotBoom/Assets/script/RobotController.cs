using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotController : MonoBehaviour
{
    Rigidbody2D robotRD;
    public float walkSpeed = 10.0f;
    public float maxSpeed = 3.0f;
    public float jumpSpeed = 5.0f;
    Animator animator;
    
    // Start is called before the first frame update
    void Start()
    {
       
        robotRD = GetComponent<Rigidbody2D>();    
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {

        float speedx = Mathf.Abs(robotRD.velocity.x);



        if (speedx < maxSpeed)
        {
            animator.SetBool("isWalking", false);

            if (Input.GetKey(KeyCode.LeftArrow) && transform.position.x >= -8.0f)
            {

                //walk애니메이션 시작
                animator.SetBool("isWalking", true);
                transform.Translate(Vector2.left * walkSpeed * Time.deltaTime);
                //robotRD.AddForce(transform.right * -walkSpeed);

                transform.localScale = new Vector2(-2.0f, 2.0f);
                if (Input.GetKeyDown(KeyCode.Space))
                {
                    animator.SetTrigger("JumpTrigger");
                    robotRD.AddForce(transform.up * walkSpeed, ForceMode2D.Impulse);
                }
            }

            else if (Input.GetKey(KeyCode.RightArrow) && transform.position.x <= 8.0f)
            {
                //walk애니메이션 시작
                animator.SetBool("isWalking", true);
                transform.Translate(Vector2.right * walkSpeed * Time.deltaTime);

                // robotRD.AddForce(transform.right * walkSpeed);

                transform.localScale = new Vector2(2.0f, 2.0f);
                if (Input.GetKeyDown(KeyCode.Space))
                {
                    animator.SetTrigger("JumpTrigger");
                    robotRD.AddForce(transform.up * walkSpeed, ForceMode2D.Impulse);
                }

            }
            else if (Input.GetKeyDown(KeyCode.Space))
            {
                animator.SetTrigger("JumpTrigger");
                robotRD.AddForce(transform.up * walkSpeed,ForceMode2D.Impulse);
            }
        }
    }


}
