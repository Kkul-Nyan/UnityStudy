using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GmaeManager : MonoBehaviour
{
    public GameObject enemyPrefab;
    public GameObject powerupPrefab;
    private float spawnRange = 9;
    public float startDelay = 2f;
    public float repeatTime = 2f;
    private int enemyCount;
    public int waveNumber = 1;
    void Start()
    {
        spawnEnemyWave(waveNumber);
        powerupSpawn();
    }

    // Update is called once per frame
    void Update()
    {
        enemyCount = FindObjectsOfType<Enemy>().Length;
        if(enemyCount == 0)
        {
            waveNumber++;
            spawnEnemyWave(waveNumber);
            powerupSpawn();
        }
    }
   
    private Vector3 GenerateSpawnPosition()
    {
        float spawnPosX = Random.Range(-spawnRange, spawnRange);
        float spawnPosZ = Random.Range(-spawnRange, spawnRange);
        Vector3 randomPos = new Vector3 (spawnPosX, 0,spawnPosZ);
        return randomPos;
    }
    void spawnEnemyWave(int enemiesTospawn)
    {   
        for(int i = 0; i < enemiesTospawn; i++)
        {
        Instantiate(enemyPrefab, GenerateSpawnPosition(), enemyPrefab.transform.rotation);
        }
    }
    void powerupSpawn()
    {
        Instantiate(powerupPrefab, GenerateSpawnPosition(), powerupPrefab.transform.rotation);  
    }

}
