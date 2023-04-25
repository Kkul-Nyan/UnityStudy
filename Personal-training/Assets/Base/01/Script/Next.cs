using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Next : MonoBehaviour
{
    public string loadSceneName;
    public string loadBackName;

    // Update is called once per frame
    void Update()
    {
        LoadNext();
        LoadBack();
    }

    void LoadNext()
    {
        if(Input.GetKey(KeyCode.Space))
        {
            SceneManager.LoadScene(loadSceneName);
        }
    }

    void LoadBack()
    {
        if (Input.GetKey(KeyCode.Backspace))
        {
            SceneManager.LoadScene(loadBackName);
        }
    }
}
