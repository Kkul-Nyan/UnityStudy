using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject obstaclePrefab;
    private Vector3 spawnPos = new Vector3(25,0,0);
    private float startDelay = 2;
    private float reperatRate = 2;
    private PlayerCcntroller playerCcntrollerScript;

    void Start()
    {
        InvokeRepeating("SpawnObstacle",startDelay,reperatRate);
        playerCcntrollerScript = GameObject.Find("Player").GetComponent<PlayerCcntroller>();
    }

    // Update is called once per frame
    void Update()
    {
    }
    void SpawnObstacle()
    {
        if(playerCcntrollerScript.GameOver == false)
        {
        Instantiate(obstaclePrefab, spawnPos, obstaclePrefab.transform.rotation);
        }
    }

}
