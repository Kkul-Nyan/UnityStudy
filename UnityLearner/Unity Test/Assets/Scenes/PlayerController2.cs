using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController2 : MonoBehaviour
{
    private Rigidbody playerRd;
    public float speed = 3.0f;
    public float jump = 5.0f;

    // Start is called before the first frame update
    void Start()
    {
        //해당스크립트가 적용된 오브젝트에서 Rigidbody컴포넌트생성
        playerRd = GetComponent<Rigidbody>();
    }
    //playerRd.AddForce(x, y, z);
    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.LeftArrow) == true)
        {
            playerRd.AddForce(-speed, 0f, 0f);
        }

        if (Input.GetKey(KeyCode.RightArrow) == true)
        {
            playerRd.AddForce(speed, 0f, 0f);
        }

        if (Input.GetKey(KeyCode.UpArrow) == true)
        {
            playerRd.AddForce(0f, 0f,speed);
        }

        if (Input.GetKey(KeyCode.DownArrow) == true)
        {
            playerRd.AddForce(0f, 0f, -speed);
        }
        
        if (Input.GetKey(KeyCode.Space) == true)
        {
            playerRd.AddForce(0f, jump, 0f );
        }

    }
}
