using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.ARFoundation;

public class ButtonManager : MonoBehaviour
{
    private ARFaceManager arFaceManager;

    MeshRenderer[] childRender;

    int check;

    private void Awake() 
    {
        arFaceManager = GetComponent<ARFaceManager>();

        //child = arFaceManager.facePrefab.GetComponentsInChildren<GameObject>();
        childRender = arFaceManager.facePrefab.GetComponentsInChildren<MeshRenderer>();

    }
    void Start()
    {/*
        for(int i  = 0; i<childRender.Length; i++)
        {
            childRender[i].gameObject.SetActive(false);
        }*/
    }

    private void Update() 
    {
        Debug.Log(childRender[check].name);
//        Debug.Log(childRender[check].material.color);
        for(int i  = 0; i<childRender.Length; i++)
        {
            if(i == check)
            {
                childRender[i].gameObject.SetActive(true);
                this.gameObject.transform.position = this.gameObject.transform.position;
            }
            else
            {
                childRender[i].gameObject.SetActive(false);
            }
        }    
        
        

    }
    public void GlassesBTNClick(int selectGlasses)
    {    
        check = selectGlasses; 
        Debug.Log(check);
        
    }

    public void ColorBTNClick(int selectNum)
    {
        if(selectNum == 1)
        {
            for(int i = 0; i<childRender.Length; i++)
            {
                childRender[i].material.color = Color.blue; //new Color (255/255f,0f,0f);
            } 
        }
        if(selectNum == 2)
        {
            for(int i = 0; i<childRender.Length; i++)
            {
                childRender[i].material.color = Color.red;//new Color (0f,255/255f,0f);
            } 
        }
        if(selectNum == 3)
        {
            for(int i = 0; i<childRender.Length; i++)
            {
                childRender[i].material.color = Color.yellow;//new Color (0f,0f,255/255f);
            } 
        }
    }
}
