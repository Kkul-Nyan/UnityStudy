using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class player : MonoBehaviour
{
    public GameObject play;
    Rigidbody parent;
    public int Sjump = 1;
    public float speed = 1;
    public float turn = 1;


    void Awake()
    {
        parent = GetComponent<Rigidbody>();
    }

    // Start is called before the first frame update
    void Start()
    {
        play.transform.position = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Jump"))
        {
            jump();
            move();
        }
    }
    public void jump()
    {
        parent.AddForce(Vector3.up*Sjump, ForceMode.Impulse);
    }
    public void move()
    {
        if(Input.GetButton("Horizontal"))
        {
            float h = Input.GetAxis("Horizontal");
            float s = Input.GetAxis("Vertical");
            parent.AddForce(s * speed, 0, 0);
            transform.rotation = Quaternion.Euler(0, 0, h*turn);
        }
    }
}
