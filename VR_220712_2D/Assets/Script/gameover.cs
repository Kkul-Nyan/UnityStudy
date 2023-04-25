using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class gameover : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Invoke("restart",0.5f);
    }

    void restart()
    {
        if (Input.anyKey)
        {
            SceneManager.LoadScene(0);
        }
    }
}
