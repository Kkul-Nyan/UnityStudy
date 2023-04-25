using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGround : MonoBehaviour
{
    public float speed = 1;
    public int nStartIdx;
    public int nEndIdx;
    public Transform[] sprites;
    float viewHeight;

    // Start is called before the first frame update
    void Start()
    {
        viewHeight = Camera.main.orthographicSize * 2;
    }

    // Update is called once per frame
    void Update()
    {
        Move();

        if (sprites[nEndIdx].position.y < viewHeight * (-1))
        {
            Vector3 backSpritesPos = sprites[nStartIdx].localPosition;
            Vector3 frontSpritesPos = sprites[nEndIdx].localPosition;

            sprites[nEndIdx].transform.localPosition = backSpritesPos + Vector3.up * viewHeight;

            int startSaveIdx = nStartIdx;
            nStartIdx = nEndIdx;
            nEndIdx = (startSaveIdx - 1 == -1) ? sprites.Length - 1 : startSaveIdx - 1;
        }
    }

    private void Move()
    {
        Vector3 curPos = transform.position;
        Vector3 nexPos = Vector3.down * speed * Time.deltaTime;
        transform.position = curPos + nexPos;
    }
}
