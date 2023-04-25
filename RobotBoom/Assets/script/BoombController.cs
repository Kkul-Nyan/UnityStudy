using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoombController : MonoBehaviour
{
    Rigidbody BombRD;
    // Start is called before the first frame update
    void Start()
    {
        
        StartCoroutine(MoveObject());
    }

    IEnumerator MoveObject()
    {
        
        BombRD = GetComponent<Rigidbody>();
        while (true)
        {
            float pop1 = Random.Range(-8f, 8f);

            yield return new WaitForSeconds(2);
            BombRD.velocity = new Vector2(pop1, 0f);           
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        GameObject hp = GameObject.Find("HpController");
       
        if (collision.gameObject.tag == "Robot")
        {
            hp.GetComponent<HpController>().HpControl();
        }
        Destroy(gameObject);
    }
}
