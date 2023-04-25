using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IWeapon
{
    void Shoot(GameObject obj, GameObject player);
}

public class Bullet1 : MonoBehaviour, IWeapon
{
    public void Shoot(GameObject obj, GameObject player)
    {
        GameObject goBullet0 = Instantiate(obj);
        goBullet0.transform.position = player.transform.position;

        Rigidbody2D rigid = goBullet0.GetComponent<Rigidbody2D>();
        rigid.AddForce(Vector2.up * 10, ForceMode2D.Impulse);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Border")
        {
            Destroy(gameObject);
        }
    }
}
