using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEditor;

public class UIManager : MonoBehaviour
{
    public Text BestScoreText;
    public InputField NameInput;

    private void Awake()
    {
        UpdateScore();
    }
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void StartGame()
    {
        GameManager.Instance.nameInput = NameInput.text;
        SceneManager.LoadScene(1);
    }

    public void Exit()
    {
        GameManager.Instance.SaveBestScore();
    #if UNITY_EDITOR
        EditorApplication.ExitPlaymode();
    #else
        Application.Quit();
    #endif
    }

    void UpdateScore()
    {
        BestScoreText.text = $"BestScore : {GameManager.Instance.name} : {GameManager.Instance.bestScore}";
    }
}
