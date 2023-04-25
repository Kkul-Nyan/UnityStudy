using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public GameObject spawnPrefab;
    public int spawnCount = 5;
    public float spawnOffset = 1.5f;

    private void Start() {
        if(spawnPrefab != null){
        SpawnEnemies();
        }
        else{
            Debug.LogError("Cannot spawn enemies!");
        }
    }
    void SpawnEnemies() {
        for(int i = 0; i < spawnCount; i++){
            float xPos = i * spawnOffset;
            Vector3 spawnPos = new Vector3(xPos, 0, 0);
            Instantiate(spawnPrefab, spawnPos, Quaternion.identity);
        }
    }
}
