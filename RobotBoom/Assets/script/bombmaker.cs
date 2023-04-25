using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bombmaker : MonoBehaviour
{
    public GameObject bombPrefep;
    public float interval = 5.0f;
    float delta = 0;
    Rigidbody BombRD;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(MoveObject());
    }

    IEnumerator MoveObject()
    {
        delta++;
        BombRD = GetComponent<Rigidbody>();
        while (true)
        {
            GameObject bomb = Instantiate(bombPrefep);
            int pop1 = Random.Range(-8, 9);
            bomb.transform.position = new Vector3(pop1, 4.0f,0f);
            yield return new WaitForSeconds(1);
            
            delta = 0.0f;
        }
    }

    // Update is called once per frame
    void Update()
    {    
        delta += Time.deltaTime;
    }

}
