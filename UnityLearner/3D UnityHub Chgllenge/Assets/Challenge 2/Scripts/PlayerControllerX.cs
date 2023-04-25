using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerX : MonoBehaviour
{
    public GameObject[] ballPrefabs;

    // Update is called once per frame
    void Update()
    {
        // On spacebar press, send dog
        if (Input.GetKeyDown(KeyCode.Space))
        {
            int randomBall = Random.Range(0,ballPrefabs.Length); 
            Instantiate(ballPrefabs[randomBall], ballPrefabs[randomBall].transform.position, ballPrefabs[randomBall].transform.rotation);
        }
    }
}
