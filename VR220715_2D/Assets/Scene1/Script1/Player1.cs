using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class Player1 : MonoBehaviour
{
    [SerializeField]
    float speed = 0f;
    public bool isTouchTop = false;
    public bool isTouchBottom = false;
    public bool isTouchRight = false;
    public bool isTouchLeft = false;
    Animator anim;
    
    public int score;

    public GameObject goBullet;
    public float curBulletDelay = 0;
    public float maxBulletDelay = 0;
    public int life = 3;
    public GameManager gameManager;
    public bool isHit = false;
    public bool[] joyControl;
    public bool isControl;
    public ObjectManager objmanager;
    public WeaponManager weaponManager;

    // Start is called before the first frame update
    void Awake()
    {
        anim = GetComponent<Animator>();
    }
    void Start()
    {
    }

    // Update is called once per frame
    
    void Update()
    {
        Move();
        Fire();
        ReloadBullet();
    }

    void Fire()
    {
        if(Input.GetKeyDown(KeyCode.Alpha1))
        {
            weaponManager.ChangeToBullet2();
        }
        if(Input.GetKeyDown(KeyCode.Alpha2))
        {
            weaponManager.ChangeToBullet3();
        }

        weaponManager.Fire(gameObject);
       
        
        if (curBulletDelay < maxBulletDelay)
        { 
            return; 
        }
        return;
        /*
        //GameObject bullet = Instantiate(goBullet, transform.position, Quaternion.identity);
        GameObject bullet = objmanager.MakeObject("PlayerBullet");
        bullet.transform.position = transform.position;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        //GameManager objmanager1 = bullet.GetComponent<GameManager>();

        rigid.AddForce(Vector2.up * 10, ForceMode2D.Impulse);

       // objmanager1.objmanager = objmanager;
        curBulletDelay = 0;*/
    }

    void ReloadBullet()
    {
        curBulletDelay += Time.deltaTime;
    }

    private void Move()
    {
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");
        //anim.SetInteger("input", (int)h);

        if (joyControl[0]) { h = -1; v = 1; anim.SetInteger("input",-1); }
        if (joyControl[1]) { h = 0; v = 1; anim.SetInteger("input", 0); }
        if (joyControl[2]) { h = 1; v = 1; anim.SetInteger("input", 1); }
        if (joyControl[3]) { h = -1; v = 0; anim.SetInteger("input", -1); }
        if (joyControl[4]) { h = 0; v = 0; anim.SetInteger("input", 0); }
        if (joyControl[5]) { h = 1; v = 0; anim.SetInteger("input", 1); }
        if (joyControl[6]) { h = -1; v = -1; anim.SetInteger("input", -1); }
        if (joyControl[7]) { h = 0; v = -1; anim.SetInteger("input", 0); }
        if (joyControl[8]) { h = 1; v = -1; anim.SetInteger("input", 1); }

        if (isTouchRight && h == -1 || isTouchLeft && h == 1 || !isControl)
        {
            h = 0; anim.SetInteger("input", 0);
        }
        if (isTouchTop && v == 1 || isTouchBottom && v == -1 || !isControl)
        {
            v = 0; 
        }

        Vector3 curPos = transform.position;
        Vector3 nextPos = new Vector3(h, v, 0) * speed * Time.deltaTime;
        
        transform.position = curPos + nextPos;
        
        if (Input.GetButtonDown("Horizontal") || Input.GetButtonUp("Horizontal"))
        {
            anim.SetInteger("input", (int)h);
        }
       
    }
    public void JoyPanel(int type )
    {
        for(int idx = 0; idx<9; idx++)
        {
            joyControl[idx] = idx == type;
        }
    }
    public void JoyDown()
    {
        isControl = true;
    }
    public void JoyUp()
    {
        isControl = false;
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
     if(collision.gameObject.tag == "Border")
        {
          switch(collision.gameObject.name)
            {
                case "Top":
                    {
                        isTouchTop = true;
                    }
                    break;
                case "Bottom":
                    {
                        isTouchBottom = true;
                    }
                    break;
                case "Right":
                    {
                        isTouchRight = true;
                    }
                    break;
                case "Left":
                    {
                        isTouchLeft = true;
                    }
                    break;
            }
        }

     if(collision.gameObject.tag == "EnemyBullet")
        {
            if (isHit)
                return;
            isHit = true;

            gameObject.SetActive(false);
            life--;
            
            collision.gameObject.SetActive(false);
            collision.gameObject.transform.position = gameManager.goEnemy.transform.position;
           
            if (life == 0)
            {
                Time.timeScale = 0;
                gameManager.GameOver();
            }
            else
            {
                gameManager.RespawnPlayer();
            } 
         }
    }
    private void LateUpdate()
    {
        gameManager.UpdateLifeIcon(life);
    }
    void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border")
        {
            switch (collision.gameObject.name)
            {
                case "Top":
                    {
                        isTouchTop = false;
                    }
                    break;
                case "Bottom":
                    {
                        isTouchBottom = false;
                    }
                    break;
                case "Right":
                    {
                        isTouchRight = false;
                    }
                    break;
                case "Left":
                    {
                        isTouchLeft = false;
                    }
                    break;
            }
        }
    }
}
