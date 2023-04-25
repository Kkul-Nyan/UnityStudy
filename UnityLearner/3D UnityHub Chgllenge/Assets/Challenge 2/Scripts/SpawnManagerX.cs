using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManagerX : MonoBehaviour
{
    
    public GameObject[] ballPrefabs;
    private float spawnLimitXLeft = -35;
    private float spawnLimitXRight = 7;
    private float spawnPosY = 0;

    private float startDelay = 1.0f;
    private float spawnInterval = 4.0f;

    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("SpawnRandomDog", startDelay, spawnInterval);
    }

    // Spawn random ball at random x position at top of play area
    void SpawnRandomDog ()
    {
        // Generate random ball index and random spawn position
        Vector3 spawnPos = new Vector3(spawnLimitXLeft, spawnPosY, 0);

        // instantiate ball at random spawn location
        Instantiate(dogPrefab, spawnPos, dogPrefab.transform.rotation);
        Instantiate(ballPrefabs[randomBall], spawnPos, ballPrefabs[randomBall].transform.rotation);
    }

}
