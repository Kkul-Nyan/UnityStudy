using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public int ammo;
    public int coin;
    public int hasGrenades;
    public GameObject[] grenades;

    public int maxammo;
    public int maxcoin;
    public int maxhasGrenades;

    GameObject nearObject;
    bool iDown;
    Player playerScript;
    public GameObject[] weapons;
    public bool[] hasWeapons;
    bool sDown1;
    bool sDown2;
    bool sDown3;
    public bool isSwap;

    Damage equipObject;
    int equipObjectIndex;
    Animator anim;

    bool fDown;
    public bool isFireReady = true; 
    float fireDelay;

    void Start()
    {
        playerScript = GameObject.Find("Player").GetComponent<Player>();
        anim = GetComponentInChildren<Animator>();
    }

    // Update is called once per frame
    void Update()
    { 
        Key();
        Attack();
        Swap();
        Interaction();

    }
    void Key()
    {
        iDown = Input.GetButtonDown("Interaction");
        sDown1 = Input.GetButtonDown("Swap1");
        sDown2 = Input.GetButtonDown("Swap2");
        sDown3 = Input.GetButtonDown("Swap3");
        fDown = Input.GetButtonDown("Fire1");
    }

    void Attack()
    {
        if(equipObject == null)
        {
            return;
        }
        fireDelay += Time.deltaTime;
        isFireReady = equipObject.rate < fireDelay;

        if(fDown && isFireReady && !playerScript.isDodge &&!playerScript.isJump && !isSwap)
        {
            isFireReady = false;
            equipObject.Use();
            anim.SetTrigger(equipObject.type == Damage.Type.Melee ? "doSwing" : "doShot");
            fireDelay = 0;
        }

    }

    void Swap()
    {

        if (sDown1 && (!hasWeapons[0] || equipObjectIndex == 0))
        { return; }
        if (sDown2 && (!hasWeapons[1] || equipObjectIndex == 1))
        { return; }
        if (sDown3 && (!hasWeapons[2] || equipObjectIndex == 2))
        { return; }



        int weaponIndex = -1;
        if (sDown1) { weaponIndex = 0; }
        if (sDown2) { weaponIndex = 1; }
        if (sDown3) { weaponIndex = 2; }

        if ((sDown1 || sDown2 || sDown3) && !playerScript.isDodge && !playerScript.isJump)
        {
            if (equipObject != null)
            { equipObject.gameObject.SetActive(false); }

            equipObjectIndex = weaponIndex;
            equipObject = weapons[weaponIndex].GetComponent<Damage>(); ;
            equipObject.gameObject.SetActive(true);

            anim.SetTrigger("doSwap");
            isSwap = true;
            Invoke("SwapOut", 0.4f);
        }
    }

    public void SwapOut()
    {
        isSwap = false;
    }


    void Interaction()
        {
            if (iDown && nearObject != null && !playerScript.isDodge && !playerScript.isJump)
            {
                if (nearObject.CompareTag("Weapon"))
                {
                    Item item = nearObject.GetComponent<Item>();
                    int weaponIndox = item.value;
                    hasWeapons[weaponIndox] = true;

                    Destroy(nearObject);
                }
            }
        }

    void OnTriggerStay(Collider other)
        {
            if (other.CompareTag("Weapon"))
            {
                nearObject = other.gameObject;
            }
        }

    void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("Weapon"))
            {
                nearObject = null;
            }
        }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Item"))
        {
           
            Item item = other.GetComponent<Item>();
            
            switch (item.type)
            { 
                case Item.Type.Ammo:
                    ammo += item.value;
                    if(ammo>maxammo)
                    {
                        ammo = maxammo;
                    }
                    break;

                case Item.Type.Coin:
                    coin += item.value;
                    if(coin > maxcoin)
                    {
                        coin = maxcoin;
                    }
                    break;

                case Item.Type.Heart:
                    playerScript.health += item.value;
                    if(playerScript.health > playerScript.maxhealth)
                    {
                        playerScript.health = playerScript.maxhealth;
                    }
                    break;

                case Item.Type.Grenade:
                    if (hasGrenades == maxhasGrenades)
                        return;

                    grenades[hasGrenades].SetActive(true);
                    hasGrenades += item.value;
                    if(hasGrenades > maxhasGrenades)
                    {
                        hasGrenades = maxhasGrenades;
                    }
                    break;
            }
            Destroy(other.gameObject);
        }
    }

}