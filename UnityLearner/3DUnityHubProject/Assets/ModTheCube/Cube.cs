using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube : MonoBehaviour
{
    public MeshRenderer Renderer;
    public float time;
    public float time1;
    public float time2;
    public float speed = 0.001f;
    public bool checkcolor  = true;
    public bool checkcolor1  = true;
    public bool checkcolor2  = true;

    void Start()
    {
        transform.position = new Vector3(1, 1, 1);
        transform.localScale = Vector3.one * 1.3f;
        time = Random.Range(0f,1f);
        time1 = Random.Range(0f,1f);
        time2 = Random.Range(0f,1f);

    }
    
    void Update()
    {
        Material material = Renderer.material;
        material.color = new Color( time, time1, time2, 0.8f);
        forTime();
        forTime1();
        forTime2();
        transform.Translate(Vector3.up * speed *Time.deltaTime);    
        if(transform.position.y< -1)
        {
        transform.transform.position = new Vector3(0,0,0); 
        transform.Translate(new Vector3(0,0,0));
        }
 
        
        transform.Rotate(10.0f * Time.deltaTime, 0.0f, 10.0f * Time.deltaTime);
    }
    void forTime()
    {
        if( checkcolor )
        {
            if(time >= 1)
            {
                checkcolor = false;
            }
            else if (time < 1)
            {
                time += Time.deltaTime;
            }
        }    
        else if(!checkcolor)
        {
           if(time <= 0)
           {
            checkcolor = true;
           }   
           else if(time > 0)
           {
           time -= Time.deltaTime;
           }
        }
    }
        void forTime1()
    {
        if( checkcolor1 )
        {
            if(time1 >= 1)
            {
                checkcolor1 = false;
            }
            else if (time1 < 1)
            {
                time1 += Time.deltaTime;
            }
        }    
        else if(!checkcolor1 )
        {
           if(time1 <= 0)
           {
            checkcolor1 = true;
           }   
           else if(time1 > 0)
           {
           time1 -= Time.deltaTime;
           }
        }
    }
        void forTime2()
    {
         if( checkcolor2 )
        {
            if(time2 >= 1)
            {
                checkcolor2 = false;
            }
            else if (time2 < 1)
            {
                time2 += Time.deltaTime;
            }
        }    
        else if(!checkcolor2)
        {
           if(time2 <= 0)
           {
            checkcolor2 = true;
           }   
           else if(time2 > 0)
           {
           time2 -= Time.deltaTime;
           }
        }
    }



}
