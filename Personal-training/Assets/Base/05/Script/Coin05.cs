using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin05 : MonoBehaviour
{
    public float rotataeSpeed = 180f;


    void Update()
    {
        transform.Rotate(Vector3.up, rotataeSpeed * Time.deltaTime, Space.Self);
    }

    private void OnTriggerEnter(Collider other) {
        if(other.CompareTag("Player")){
            other.GetComponent<PlayerController05>().AddScore(1);
            Destroy(gameObject);
        }
    }
}
