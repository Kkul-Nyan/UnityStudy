using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    public new string name;
    public string nameInput;
    public int bestScore;


    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        LoadBestScore();
        
    }


    [System.Serializable]
    class SaveData
    {
        public string name;
        public int bestscore;
    }

    public void SaveBestScore()
    {
        SaveData data = new SaveData();
        data.name = name;
        data.bestscore = bestScore;

        string json = JsonUtility.ToJson(data);

        File.WriteAllText(Application.persistentDataPath + "/savescore.json", json);

    }

    public void LoadBestScore()
    {
        string path = Application.persistentDataPath + "/savescore.json";
        if(File.Exists(path))
        {
            string json = File.ReadAllText(path);
            SaveData data = JsonUtility.FromJson<SaveData>(json);

            name = data.name;
            bestScore = data.bestscore;
        }
    }

}
