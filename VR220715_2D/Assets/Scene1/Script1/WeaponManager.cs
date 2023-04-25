using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum WeaponType
{
    Bullet2,
    Bullet3
}


public class WeaponManager : MonoBehaviour
{
    public GameObject bullet2;
    public GameObject bullet3;
    public GameObject player;
    
    private Iweapon weapon;

    private void SetWeaponType(WeaponType weaponType)
    {
        Component c = gameObject.GetComponent<Iweapon>() as Component;
        if( c != null)
        {
            Destroy(c);
        }
        switch(weaponType)
        {
            case WeaponType.Bullet2:
                {
                    weapon = gameObject.AddComponent<Bullet2>();
                }
                break;
            case WeaponType.Bullet3:
                {
                    weapon = gameObject.AddComponent<Bullet3>();
                   //Bullet3 = weapon;
                }
                break;
        }    
    }

    void Start()
    {
        SetWeaponType(WeaponType.Bullet2);
    }

    public void ChangeToBullet2()
    {
        SetWeaponType(WeaponType.Bullet2);
    }
    public void ChangeToBullet3()
    {
        SetWeaponType(WeaponType.Bullet3);
    }

    public void Fire(GameObject bullet)
    {
        weapon.Shoot(bullet, player );
    }



}
