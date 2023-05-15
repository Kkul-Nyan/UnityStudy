using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterSpawner : MonoBehaviour
{
    public GameObject[] monsters;
    public float spawnTime;
    public Transform[] spawnPosition;

    private void Start() {
        InvokeRepeating("Spawner",0.1f, spawnTime);
    }

    void Spawner(){
        int randomNum = Random.Range(0, monsters.Length);
        int spawnNum = Random.Range(0, spawnPosition.Length);
        Instantiate(monsters[randomNum], spawnPosition[spawnNum].transform.position, Quaternion.identity);
        spawnTime = 0;
    }
 
    
}
