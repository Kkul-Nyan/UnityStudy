using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet3 : MonoBehaviour,Iweapon
{
    public float power = 0f;
    private Iweapon weapon;

    public void Shoot(GameObject obj, GameObject player)
    {
        GameObject bullet = Instantiate(obj);
        bullet.transform.position = player.transform.position;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        //GameManager objmanager1 = bullet.GetComponent<GameManager>();

        rigid.AddForce(Vector2.up * 10, ForceMode2D.Impulse);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border")
        {
            gameObject.SetActive(false);
        }
    }

}
