using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed = 5.0f;
    Vector3 startPos;
    private Rigidbody playerRi;

    // Start is called before the first frame update
    void Start()
    {
        playerRi = GetComponent<Rigidbody>();
        startPos = new Vector3(0, 0, 0);

    }

    // Update is called once per frame
    void Update()
    {

        if(Input.GetKey(KeyCode.RightArrow))
        {
            transform.Translate(Vector3.right * speed * Time.deltaTime);
        }

        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.Translate(Vector3.left * speed * Time.deltaTime);
        }
    }
    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("ball"))
        {
            Vector3 currPos = transform.position;
            Vector3 incomVec = currPos - startPos;
            Vector3 normalVec = collision.contacts[0].normal;
            Vector3 reflectVec = Vector3.Reflect(incomVec, normalVec);

            reflectVec = reflectVec.normalized;
            playerRi.AddForce(reflectVec);
        }
        startPos = transform.position;
    }
}
