using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TG_CameraMoving : MonoBehaviour
{
    Transform playertransform;
    Vector3 Offset;
    // Start is called before the first frame update
    void Awake()
    {
        playertransform = GameObject.FindGameObjectWithTag("Player").transform;
        Offset = transform.position - playertransform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void LateUpdate()
    {

        transform.position = playertransform.position + Offset;
    }
}
