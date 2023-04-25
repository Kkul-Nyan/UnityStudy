using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    public Button continueBTN;

    private void Start() {
        continueBTN.interactable = PlayerPrefs.HasKey("Save");
    }

    public void OnContinueButton(){
        SceneManager.LoadScene(1);
    }
    
    public void OnNewGameButton(){
        PlayerPrefs.DeleteKey("Save");
        SceneManager.LoadScene(1);
    }

    public void OnExitButton(){
        Application.Quit();
    }
}
