using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GomController : MonoBehaviour
{
    public Rigidbody mog;
    public Transform fireTransform;
    public float ShootSpeed;
    public int playerNum = 1;
    private float remonster = 1.0f;
    public float createmonster = 100;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void FixedUpdate()
    {
        
    }
    // Update is called once per frame
    void Update()
    {
        remonster++;

        if (remonster == createmonster)
        {
            Rigidbody GomInstance =
            Instantiate(mog, fireTransform.position, fireTransform.rotation) as Rigidbody;

            //��ź�߻�
            GomInstance.velocity = ShootSpeed * fireTransform.forward;
            remonster = 0;
        }
    }
}
