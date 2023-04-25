using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEditor;



public class GameManager : MonoBehaviour
{
    private void Update()
    {
        OpenUI();
    }

    void OpenUI()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SaveLoadManager load = Resources.Load<SaveLoadManager>("LoadUI");
            load.OpenUI();
        }
    }


    public void startButtom()
    {
        LoadUIManager.Instance.LoadScene("Play");
    }

    public void LoadButton()
    {
        SaveLoadManager load = Resources.Load<SaveLoadManager>("LoadUI");
        load.LoadButton();
    }

    public void SaveButton()
    {
        SaveLoadManager load = Resources.Load<SaveLoadManager>("SaveUI");
        load.SaveButton();
    }



    public void OptionButton()
    {
        OptionManager option = Resources.Load<OptionManager>("OptionUI");
        option.OpenUI();
    }

    

    public void Exit()
    {
#if     UNITY_EDITOR
        EditorApplication.ExitPlaymode();
#else
        Application.Quit();
#endif
    }
}