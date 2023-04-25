using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class singletonManager : MonoBehaviour
{
    // Start is called before the first frame update
   
    public static singletonManager instance = null;
    public int nScore = 0;
    void Awake()
    {
        if(null==instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject); ;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    // Update is called once per frame
    public static singletonManager Instance
    {
        get{
            if(instance == null)
            { 
                return null;
            }
             return instance;
           

        }
  
    }
    public int GetScore()
    {
        return nScore;
    }
    public void SetScore(int num)
    {
        nScore = num;
    }
}
