using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveLeft : MonoBehaviour
{
    private float speed = 30;
    private float leftBound = -15;
    private PlayerCcntroller playerCcntrollerScript;
    void Start()
    {
        playerCcntrollerScript = GameObject.Find("Player").GetComponent<PlayerCcntroller>();
    }

    // Update is called once per frame
    void Update()
    {
        if(playerCcntrollerScript.GameOver == false)
        {
        transform.Translate(Vector3.left * Time.deltaTime * speed );
        }
        if(transform.position.x < leftBound && gameObject.CompareTag("Obstacle"))
        {
            Destroy(gameObject);
        }
    }
}
