using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerUseItem : MonoBehaviour
{
    GameObject nearObject;
    private Player playerScript;
    bool iDown;
    public GameObject[] weapons;
    public bool[] hasWeapons;

    bool sDown1;
    bool sDown2;
    bool sDown3;
    public bool isSwap;
    GameObject equipWeapon;



    void Start()
    {
        playerScript = GameObject.Find("Player").GetComponent<Player>();
    }

    // Update is called once per frame
    void Update()
    {
        GetInput();
        Interaction();
        Swap();
    }

    void GetInput()
    {
        iDown =Input.GetButtonDown("Interaction");
        sDown1 =Input.GetButtonDown("Swap1");
        sDown2 =Input.GetButtonDown("Swap2");
        sDown3 =Input.GetButtonDown("Swap3");

    }
    void OnTriggerStay(Collider other)
    {
        if(other.tag =="Weapon" )
        {
        nearObject = other.gameObject;

        }
    }

    void OnTriggerExit(Collider other)
    {
        nearObject = null;
    }
    void Swap()
    {
        int weaponIndex = -1;
        if(sDown1) weaponIndex =0;
        if(sDown2) weaponIndex =1;
        if(sDown3) weaponIndex =2;

        if(((sDown1 && hasWeapons[0]) || (sDown2&&hasWeapons[1])|| (sDown3 && hasWeapons[2])) && !playerScript.isDodge && !playerScript.isJump)
        {
            Animator anim = playerScript.GetComponentInChildren<Animator>();
            if(equipWeapon != null)
            {
                equipWeapon.SetActive(false);
                equipWeapon = weapons[weaponIndex];
                equipWeapon.SetActive(true);
                anim.SetTrigger("doSwap");
                isSwap =true;
                Invoke("SwapOut",0.4f);
            }
            else if (equipWeapon == null)
            {
                equipWeapon = weapons[weaponIndex];
                equipWeapon.SetActive(true);
                anim.SetTrigger("doSwap");
                isSwap =true;
                Invoke("SwapOut",0.4f);
            }
        }
    }
    void SwapOut()
   {
     isSwap = false;
   }
    public void Interaction()
    {
        if(iDown && nearObject != null)
        {
            if(nearObject.tag == "Weapon")
            {
                Item item = nearObject.GetComponent<Item>();
                int weaponIndex =item.value;
                hasWeapons[weaponIndex] = true;
                Destroy(nearObject);
            }
        }
    }

}
