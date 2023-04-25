using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum FlightType
{
    Triangle,
    Circle
}

public abstract class Flight : MonoBehaviour
{
    protected FlightType type;
    protected string name;
    protected float hp;
    protected float power;
    protected float speed;

    protected Sprite[] sprites;
    protected SpriteRenderer spriteRenderer;
    protected Rigidbody2D rb;
    protected float curBulletDelay;
    protected float maxBulletDelay;
    protected Animator anim;


    public abstract void Attack();
    public abstract void Move();
    public abstract void Setplayer(GameObject goPlayer)
}

