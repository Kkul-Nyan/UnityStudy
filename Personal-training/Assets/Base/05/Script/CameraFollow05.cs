using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow05 : MonoBehaviour
{
    public Transform target;
    public Vector3 offset;
    
    void Update()
    {
        transform.position = target.position + offset;   
    }
}
 