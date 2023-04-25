using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float speed;
    private Rigidbody enemyrb;
    private GameObject player;
    


    void Start()
    {
        enemyrb = GetComponent<Rigidbody>();
        player = GameObject.Find("Player");
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.y<-10)
        {
            Destroy(gameObject);
        }

        Vector3 lookDirection = (player.transform.position-transform.position).normalized;
        enemyrb.AddForce( lookDirection * speed);
    }
}
  