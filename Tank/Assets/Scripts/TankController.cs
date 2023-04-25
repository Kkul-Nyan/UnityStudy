using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TankController : MonoBehaviour
{
    public float mvSpeed = 10.0f;
    public float roSpeed = 150.0f;
    public float Hp = 100;
    public int playerNum = 1; //탱크번호
    public float damage = 20.0f;
    private string mvAxiName; //이동축 이름(Vertical1, Vertical2)
    private string roAxiName; //회전축 이름(Horizontal1, Horizontal2)
    
    


    // Start is called before the first frame update
    void Start()
    {
        mvAxiName = "Vertical" + playerNum.ToString();
        roAxiName = "Horizontal" + playerNum.ToString(); 

    }

    // Update is called once per frame
    void Update()
    {
            float mv = Input.GetAxis(mvAxiName) * mvSpeed * Time.deltaTime;
            float ro = Input.GetAxis(roAxiName) * roSpeed * Time.deltaTime;

            transform.Translate(0, 0, mv);
            transform.Rotate(0, ro, 0);


    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "shell")
        {
            Hp -= damage;
        }
        if (Hp <= 0)
        {
            Destroy(gameObject);
        }
        
    }
}
