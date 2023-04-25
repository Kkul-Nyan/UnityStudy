using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class IceCreamColor : MonoBehaviour
{
    Renderer renderer;

    public float time = 0f;

    void Start()
    {
        renderer = gameObject.GetComponent<Renderer>();
        
    }
     private void Update() {
        ColorChange();
    }
    void ColorChange()
    {
        time += Time.deltaTime;
        if(time >= 0 && time < 1)
        {
            renderer.material.color = new Color(255f/255f,174f/255f,188f/255f);
        }
        else if( time >= 1 && time < 2)
        {
            renderer.material.color = new Color(160f/255f,231f/255f,228f/255f);
        }
        else if(time >= 2)
        {
            renderer.material.color = new Color(179f/255f,248f/255f,200f/255f);
            if(time >= 3)
            {
                time = 0;
            }
        }
    }
        
}
