using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectController : MonoBehaviour
{
    public Fish fish;
    public float speed = 0.1f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(new Vector3(-1f* speed, 0f));
        destory();
    }

    void destory()
    {
        if(transform.position.x < -11.5)
        {
            Destroy(gameObject);
        }
    }

}
