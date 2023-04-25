using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy1 : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed = 1f ;
    public float healt;
    
    public int enemyscore = 1;
    public int destorypoint = 3;
    public Sprite[] sprites;
    SpriteRenderer spriteRenderer;

    Rigidbody2D rb;

    public float curBulletDelay = 0f;
    public float maxBulletDelay;
    public GameObject goBullet;
    public GameObject goPlayer;
    public GameManager manager;
    public ObjectManager objmanager;
   


    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
       // rb = GetComponent<Rigidbody2D>();
    }
    void Start()
    {
       // rb.velocity = Vector2.down * speed;
    }
    // Update is called once per frame
    void Update()
    {
        Fire();
        ReloadBullet();
    }

    void Fire()
    {
        if(curBulletDelay < maxBulletDelay)
        { return; }
        //GameObject createBullet = Instantiate(goBullet, transform.position, Quaternion.identity);
        GameObject createBullet = objmanager.MakeObject("EnemyBullet");
        createBullet.transform.position = transform.position;

        Rigidbody2D rd = createBullet.GetComponent<Rigidbody2D>();

        Vector3 dirVec = goPlayer.transform.position - transform.position;
        rd.AddForce(dirVec.normalized * 1, ForceMode2D.Impulse);
      
        curBulletDelay = 0;
    }

    void ReloadBullet()
    {
        curBulletDelay += Time.deltaTime;
    }


    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border")
        {
            int randPoint = Random.Range(0, 3);
            gameObject.SetActive(false);


        }
   
        else if (collision.gameObject.tag == "PlayerBullet" ) 
        {
            Bullet1 bullet = collision.gameObject.GetComponent<Bullet1>();
            OnHit(bullet.power);
            collision.gameObject.SetActive(false);

        }
    }
  
    void ReturnSprite()
    {
        spriteRenderer.sprite = sprites[0];
    }

    void OnHit(float playerBulletPower)
    {
        healt -= playerBulletPower;
        spriteRenderer.sprite = sprites[1];
        Player1 playerLogic = goPlayer.GetComponent<Player1>();
        playerLogic.score += enemyscore;
        
        Invoke("ReturnSprite", 0.1f);  // startcouroutine ���ε� ����. 

        if (healt <= 0)
        {

            gameObject.SetActive(false);
            playerLogic.score += destorypoint;

        }
    }
    /*private void OnEnable()
    {
        healt = 1;
    }*/
}
