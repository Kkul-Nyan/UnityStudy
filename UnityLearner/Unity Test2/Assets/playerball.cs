using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerball : MonoBehaviour
{
    public float speed = 5.0f;


    Vector3 startPos;
    private Rigidbody playerRi;

    // Start is called before the first frame update
    void Start()
    {
        playerRi = GetComponent<Rigidbody>();
        playerRi.AddForce(-speed, 0f, speed * 0.7f);
        startPos = new Vector3(0, 0, 0);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.UpArrow) == true)
        {
            playerRi.AddForce(0f, 0f, speed / 50);
        }

        if (Input.GetKey(KeyCode.DownArrow) == true)
        {
            playerRi.AddForce(0f, 0f, -speed / 50);
        }

        if (Input.GetKey(KeyCode.RightArrow) == true)
        {
            playerRi.AddForce(speed / 50, 0f, 0f);
        }

        if (Input.GetKey(KeyCode.LeftArrow) == true)
        {
            playerRi.AddForce(-speed / 50, 0f, 0f );
        }


    }

    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("wall"))
        {
            Vector3 currPos = transform.position;
            Vector3 incomVec = currPos - startPos; //입사각
            Vector3 normalVec = collision.contacts[0].normal; //수직벡터
            Vector3 reflectVec = Vector3.Reflect(incomVec, normalVec); //반사각

            reflectVec = reflectVec.normalized; //반사각 정규화

            playerRi.AddForce(reflectVec * speed);
        }
        startPos = transform.position;

    }
}
