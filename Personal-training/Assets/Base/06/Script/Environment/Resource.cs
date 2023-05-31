using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;
using UnityEngine.Audio;


public class Resource : MonoBehaviour
{
    [Title("Info")]
    public ItemData itemToGive;
    public int quantitiyPerHit = 1;
    public int capacity;
    public GameObject hitParticle;
    private AudioSource audio;
    public AudioClip hitSound;
    
    void Start(){
        audio = GetComponent<AudioSource>();
        audio.clip = hitSound;
    }

    public void Gather(Vector3 hitPoint, Vector3 hitNormal){
        for(int i = 0; i< quantitiyPerHit; i++){
            if(capacity <= 0){
                break;
            }

            capacity -= 1;
            audio.Play();
            Inventory.instance.AddItem(itemToGive);
        }
        Destroy(Instantiate(hitParticle, hitPoint, Quaternion.LookRotation(hitNormal, Vector3.up)), 1f);

        if(capacity <= 0){
            Destroy(gameObject);
        }
    }
}
