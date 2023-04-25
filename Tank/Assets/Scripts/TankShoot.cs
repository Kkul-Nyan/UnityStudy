using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TankShoot : MonoBehaviour
{
    public Rigidbody preafabShell;
    public Transform fireTransform;
    public float ShootSpeed;
    public int playerNum = 1;
    private string fireNum;
   

    // Start is called before the first frame update
    void Start()
    {
        fireNum = "Fire" + playerNum.ToString();
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown(fireNum))
        {
            Rigidbody shellInstance =
            Instantiate(preafabShell, fireTransform.position, fireTransform.rotation) as Rigidbody;

            //Æ÷Åº¹ß»ç
            shellInstance.velocity = ShootSpeed * fireTransform.forward;
            
        }

    }
}
