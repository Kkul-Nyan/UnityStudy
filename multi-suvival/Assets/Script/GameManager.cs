using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    //static은 바로 메모리에 올려버림
    public static GameManager instance;
    public PoolManager poolManager;
    public Player player;
    public float gameTime;
    public float maxGameTime = 2 * 10f;

    void Awake(){
        instance = this;
    }
    private void Update() {
        gameTime += Time.deltaTime;
        if(gameTime> maxGameTime){
            gameTime = maxGameTime;
        }
    }
}
