using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu05 : MonoBehaviour
{
    public void PlayBTN() {
        SceneManager.LoadScene(5);
    }

    public void QuitBTN(){
        Application.Quit();
    }
}
