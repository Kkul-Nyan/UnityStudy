using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum WeaponType
{
    Bullet0,
    Bullet1
}

public class WeaponManager : MonoBehaviour
{
    public GameObject bullet0;
    public GameObject bullet1;

    private GameObject myBullet;

    private IWeapon weapon;

    private void SetWeaponType (WeaponType weaponType)
    {
        Component c = gameObject.GetComponent<IWeapon>() as Component;
        if (c != null)
        {
            Destroy(c);
        }

        switch(weaponType)
        {
            case WeaponType.Bullet0:
                {
                    weapon = gameObject.AddComponent<Bullet0>();
                    myBullet = bullet0;
                }
                break;
            case WeaponType.Bullet1:
                {
                    weapon = gameObject.AddComponent<Bullet1>();
                    myBullet = bullet1;
                }
                break;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        //SetWeaponType(WeaponType.Bullet0);
    }

    public void ChangeToBullet0() // ÃÑ¾Ë 1¹ß
    {
        SetWeaponType(WeaponType.Bullet0);
    }

    public void ChangeToBullet1() // ÃÑ¾Ë 2¹ß
    {
        SetWeaponType(WeaponType.Bullet1);
    }

    public void Fire(GameObject player)
    {
        weapon.Shoot(myBullet, player);
    }
}