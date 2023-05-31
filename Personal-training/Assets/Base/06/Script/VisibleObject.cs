using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VisibleObject : MonoBehaviour
{
    public GameObject player;
    public float canVisibleDistance;
    
    private void Start(){
        InvokeRepeating("CheckPlayer",0.1f,1f);
    }

    void CheckPlayer(){
        float distance = Vector3.Distance(player.transform.position,  transform.position);
        if(canVisibleDistance < distance){
            transform.gameObject.SetActive(false);
        }
        else{
            transform.gameObject.SetActive(true);
        }
    }
}
