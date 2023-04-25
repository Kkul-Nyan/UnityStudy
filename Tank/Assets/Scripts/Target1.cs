using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target1 : MonoBehaviour
{
    public float Damage = 50.0f;
    public float Hp = 100.0f;
    public ParticleSystem tankExplosion;


    // Start is called before the first frame update
    void Start()
    {
 
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        ParticleSystem Fired = Instantiate(tankExplosion,transform.position,transform.rotation);
        if(collision.gameObject.tag == "shell")
        {
            Debug.Log("Hit");
            Hp -= Damage;
        }
        if (Hp <= 0)
        {
            
            Fired.Play();
            Destroy(gameObject);
            Destroy(Fired.gameObject,3.0f);
        }
       
    }
}
