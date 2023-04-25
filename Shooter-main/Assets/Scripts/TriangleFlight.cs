using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TriangleFlight : Flight
{

    public TriangleFlight()
    {
        type = FlightType.Triangle;
        name = "Enemy1";
        hp = 50;
        power = 5;
        speed = 2;

        Sprite[] sprites;
        SpriteRenderer spriteRenderer;
        Rigidbody2D rb;
        float curBulletDelay;
        float maxBulletDelay;
        Animator anim;
}

    public override void Attack()
    {
        throw new System.NotImplementedException();
    }

    public override void Move()
    {
        rb = GetComponent<Rigidbody2D>();
        rb.velocity = new Vector2(0, speed * (-1));
    }

    public override void Setplayer(GameObject goPlayer)
    {
        
    }
}
