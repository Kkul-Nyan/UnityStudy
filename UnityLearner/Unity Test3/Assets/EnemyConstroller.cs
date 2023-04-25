using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyConstroller : MonoBehaviour
{
    public float speed = 10.0f;
    private Rigidbody enemyRd;
    private float moveRate;
    private float timeAftermove;
    // Start is called before the first frame update
    void Start()
    {
        enemyRd =GetComponent<Rigidbody>();

        moveRate = Random.Range(-1.0f, 1.0f);
    }

    // Update is called once per frame
    void Update()
    {
        enemyRd.AddForce(new Vector3(moveRate, 0, 0));
    }
}
