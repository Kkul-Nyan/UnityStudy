using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour
{
    GameObject bullet;
    Vector3 direction;
    public float speed;
    // Start is called before the first frame update
    public void Awake()
    {
      
        
    }

    void Start()
    {
    

    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(direction);
    }
    public void Shoot(Vector3 direction)
    {
        this.direction = direction;
    }
}
