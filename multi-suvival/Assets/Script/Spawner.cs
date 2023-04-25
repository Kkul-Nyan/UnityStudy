using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public SpawnData[] spawnDatas;
    int level;
    public Transform[] spawnPoint;
    float timer;
    public float spawnTime = 1;
    private void Awake() {
        spawnPoint = GetComponentsInChildren<Transform>();
    }
    void Update()
    {
        timer += Time.deltaTime * spawnTime;
        level =  Mathf.FloorToInt(GameManager.instance.gameTime / 10f);

        if(timer > spawnDatas[level].spawnTime)
        {
            Spawn();
            timer = 0f;
        }
   
    }

    void Spawn(){
        GameObject enemy = GameManager.instance.poolManager.Get(0);
        enemy.transform.position = spawnPoint[Random.Range(1,spawnPoint.Length)].position;
        enemy.GetComponent<Enemy>().Init(spawnDatas[level]);
    }
}
[System.Serializable]
public class SpawnData
{
    public int spriteType;
    public float spawnTime;
    public int health;
    public float speed;

}