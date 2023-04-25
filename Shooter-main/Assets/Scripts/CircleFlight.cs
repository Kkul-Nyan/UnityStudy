using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleFlight : Flight
{
    public CircleFlight()
    {
        type = FlightType.Triangle;
        name = "Enemy2";
        hp = 100;
        power = 5;
        speed = 1;
    }

    public override void Attack()
    {
        throw new System.NotImplementedException();
    }
}
