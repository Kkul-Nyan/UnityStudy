using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gom : MonoBehaviour
{

    Rigidbody GomRi;
    public float Damage = 50.0f;
    public float Hp = 100.0f;
    public ParticleSystem tankExplosion;
    private float timer = 1.0f;
    public float MonsterTurn = 100;
    GameObject target;
    public float chase = 1.0f;
    
    // S
    // tart is called before the first frame update
    void Start()
    {
        target = GameObject.Find("Tank");

    }

    // Update is called once per frame
    void Update()
    {
        timer++;
        if (timer > MonsterTurn)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, chase);
            timer = 0;
        }

    }



    private void OnCollisionEnter(Collision collision)
    {
        ParticleSystem Fired = Instantiate(tankExplosion, transform.position, transform.rotation);
        if (collision.gameObject.tag == "shell")
        {
            Debug.Log("Hit");
            Hp -= Damage;
        }
        if (Hp <= 0)
        {

            Fired.Play();
            Destroy(gameObject);
            // Destroy(Fired.gameObject);
        }

    }
}

