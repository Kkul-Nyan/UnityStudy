using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float speed;
    public float health;

    public Sprite[] sprites;
    SpriteRenderer spriteRenderer;

    Rigidbody2D rd;

    public float curBulletDelay = 0f;
    public float maxBulletDelay;

    public GameObject goBullet;
    public GameObject goPlayer;

    public int nDmgPoint;

    public ObjectManager objManager;

    //7.18
    public string name;
    public Animator anim;

    public int patternIdx = 0;
    public int curPatternCount = 0;
    public int[] maxPatternCount = { 2, 3, 100, 10 };

    // Start is called before the first frame update
    void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();

        if (name == "B")
            anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (name == "B")
            return;

        Fire();
        ReloadBullet();
    }

    void Fire()
    {
        if (curBulletDelay < maxBulletDelay)
            return;

        GameObject createBullet = objManager.MakeObject("EnemyBullet"); //Instantiate(goBullet, transform.position, Quaternion.identity);
        createBullet.transform.position = transform.position;

        Rigidbody2D rd = createBullet.GetComponent<Rigidbody2D>();

        Vector3 dirVec = goPlayer.transform.position - transform.position;

        rd.AddForce(dirVec.normalized * 3, ForceMode2D.Impulse);

        curBulletDelay = 0;
    }

    void ReloadBullet()
    {
        curBulletDelay += Time.deltaTime;
    }

    void ReturnSprite()
    {
        spriteRenderer.sprite = sprites[0];
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border" && name != "B")
        {
            gameObject.SetActive(false); //Destroy(gameObject);
        }
        else if (collision.gameObject.tag == "PlayerBullet")
        {
            Bullet bullet = collision.gameObject.GetComponent<Bullet>();
            OnHit(bullet.power);

            collision.gameObject.SetActive(false); //Destroy(collision.gameObject);
        }
    }

    void OnHit(float playerBulletPower)
    {
        health -= playerBulletPower;

        if (name == "B")
        {
            anim.SetTrigger("OnHit");
        }
        spriteRenderer.sprite = sprites[1];

        Invoke("ReturnSprite", 0.1f); // StartCouroutine 으로도 써보자.

        if (health <= 0)
        {
            gameObject.SetActive(false); //Destroy(gameObject);

            Player playerLogic = goPlayer.GetComponent<Player>();
            playerLogic.nScore += nDmgPoint;
        }
    }

    private void OnEnable()
    {
        switch(name)
        {
            case "B":
                {
                    health = 1000;
                    Stop();
                }
                break;
            case "A":
                {
                    health = 100;
                }
                break;
        }
    }

    //7.18
    private void Stop()
    {
        if (!gameObject.activeSelf)
            return;

        Rigidbody2D rigid = GetComponent<Rigidbody2D>();
        rigid.velocity = Vector2.zero;

        Invoke("Think", 2.0f);
    }

    void Think()
    {
        patternIdx = patternIdx == 3 ? 0 : patternIdx + 1;

        curPatternCount = 0;

        switch (patternIdx)
        {
            case 0:
                FireArc();
                break;
            case 1:
                FireArc();
                break;
            case 2:
                FireArc();
                break;
            case 3:
                FireArc();
                break;
        }
    }

    void FireFoward()
    {
        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIdx])
            Invoke("FireFoward", 2.0f);
        else
            Invoke("Think", 3.0f);
    }

    void FireShot()
    {

    }

    void FireArc()
    {
        return;
        GameObject bullet = objManager.MakeObject("EnemyBullet");
        bullet.transform.position = transform.position;
        bullet.transform.rotation = Quaternion.identity;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        Vector2 dirVec = new Vector2(Mathf.Sin(Mathf.PI * 10 * curPatternCount / maxPatternCount[patternIdx]), -1);
        rigid.AddForce(dirVec.normalized * 5, ForceMode2D.Impulse);

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIdx])
            Invoke("FireArc", 0.15f);
        else
            Invoke("Think", 3.0f);
    }

    void FireAround()
    {

    }
}
