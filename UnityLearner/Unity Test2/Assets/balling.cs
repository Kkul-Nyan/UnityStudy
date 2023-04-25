using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class balling : MonoBehaviour
{
    public float speed = 300.0f;
    private Rigidbody ballrb;
    Vector3 startPos;

    // Start is called before the first frame update
    void Start()
    {
        ballrb = GetComponent<Rigidbody>();
        ballrb.AddForce(Random.Range(-400.0f,400.0f), 0, speed);
        startPos = new Vector3(0, 0, 0);
    }

    // Update is called once per frame
    void Update()
    {
   
    }

    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("wall"))
        {
            Vector3 currPos = transform.position;
            Vector3 incomVec = currPos - startPos;
            Vector3 normalVec = collision.contacts[0].normal;
            Vector3 reflectVec = Vector3.Reflect(incomVec, normalVec);

            reflectVec = reflectVec.normalized;
            ballrb.AddForce(reflectVec * speed);
        }

        else if(collision.gameObject.CompareTag("bar"))
        {
            Vector3 currPos = transform.position;
            Vector3 incomVec = currPos - startPos;
            Vector3 normalVec = collision.contacts[0].normal;
            Vector3 reflectVec = Vector3.Reflect(incomVec, normalVec);

            reflectVec = reflectVec.normalized;
            ballrb.AddForce(reflectVec * 1.3f * speed);
        }

        else if (collision.gameObject.CompareTag("pin"))
        {
            Vector3 currPos = transform.position;
            Vector3 incomVec = currPos - startPos;
            Vector3 normalVec = collision.contacts[0].normal;
            Vector3 reflectVec = Vector3.Reflect(incomVec, normalVec);

            reflectVec = reflectVec.normalized;
            ballrb.AddForce(reflectVec * 1.3f * speed);

            Destroy(collision.gameObject);
        }

        startPos = transform.position;
    }


}
