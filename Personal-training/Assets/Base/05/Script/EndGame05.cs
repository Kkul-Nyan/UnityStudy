using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndGame05 : MonoBehaviour
{
    public string nextSceneName;
    public bool lastLevel;

    private void OnTriggerEnter(Collider other) {
        if(other.CompareTag("Player")){
            if(lastLevel == true){
                SceneManager.LoadScene("05-0");
            }
            else{
                SceneManager.LoadScene(nextSceneName);
            }
        }
    }


}
