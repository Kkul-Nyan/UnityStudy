using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour
{
    
    public GameObject bullerPrefab;

    void Start()
    {
        
    }

    void Update()
    {
        GameObject gobullet =Instantiate(bullerPrefab);
        gobullet.transform.position = new Vector3(Random.Range(-7f, 7f), Random.Range(-2f, 2.1f), 0);
    }
}
