using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tree04 : MonoBehaviour
{
    public Color hitColor;
    public MeshRenderer mr;
    private void OnCollisionEnter(Collision other) {
        mr.material.color = hitColor;
    }
}
