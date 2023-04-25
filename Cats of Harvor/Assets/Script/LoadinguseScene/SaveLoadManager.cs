using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using UnityEditor;

public class SaveLoadManager : MonoBehaviour
{
    public CanvasGroup canvasGroup;
    public GameObject Warnming;

    int SaveNum;
    int LoadNum;

    public float rightEye;
    public float leftEye;
    public float nose;
    public float rightEar;
    public float leftEar;
    public float frontRightArm;
    public float frontRightHand;
    public float frontLeftArm;
    public float frontLeftHand;
    public float backRightLeg;
    public float backRightFoot;
    public float backLeftLeg ;
    public float backLeftFoot;
    public float tail;
    public float heart;
    public float lung;
    public float liver;

    public void DataForSave()
    {
         rightEye = PlayerManager.instance.rightEye;
         leftEye = PlayerManager.instance.leftEye;
         nose = PlayerManager.instance.nose;
         rightEar = PlayerManager.instance.rightEar;
         leftEar = PlayerManager.instance.leftEar;
         frontRightArm = PlayerManager.instance.frontRightArm;
         frontRightHand = PlayerManager.instance.frontRightHand;
         frontLeftArm = PlayerManager.instance.frontLeftArm;
         frontLeftHand = PlayerManager.instance.frontLeftHand;
         backRightLeg = PlayerManager.instance.backRightLeg;
         backRightFoot = PlayerManager.instance.backRightFoot;
         backLeftLeg = PlayerManager.instance.backLeftLeg;
         backLeftFoot = PlayerManager.instance.backLeftFoot;
         tail = PlayerManager.instance.tail;
         heart = PlayerManager.instance.heart;
         lung = PlayerManager.instance.lung;
         liver = PlayerManager.instance.liver;
    }

    public void OpenUI()
    {
        SaveLoadManager load = Instantiate(Resources.Load<SaveLoadManager>("MainUI"));
        load.gameObject.SetActive(true);
        float time = 0;
        while (time <= 1)
        {
            time += (Time.unscaledDeltaTime / 1000);
            load.canvasGroup.alpha = Mathf.Lerp(0f, 1f, time);
        }
    }

    public void UIExit()
    {
        SaveLoadManager load = FindObjectOfType<SaveLoadManager>();
        float time = 0;
        while (time <= 1)
        {
            time += Time.unscaledDeltaTime;
            load.canvasGroup.alpha = Mathf.Lerp(1f, 0f, time);
        }
        load.gameObject.SetActive(false);
        Destroy(load.gameObject);
    }


    public void LoadButton()
    {
        SaveLoadManager load = Instantiate(Resources.Load<SaveLoadManager>("LoadUI"));
        load.gameObject.SetActive(true);
        float time = 0;
        while (time <= 1)
        {
            time += (Time.unscaledDeltaTime/1000);
            load.canvasGroup.alpha = Mathf.Lerp(0f, 1f, time);
        }
    }

    public void LoadExit()
    {
        SaveLoadManager load = FindObjectOfType<SaveLoadManager>();
        float time = 0;
        while (time <= 1)
        {
            time += Time.unscaledDeltaTime;
            load.canvasGroup.alpha = Mathf.Lerp(1f, 0f, time);
        }
        load.gameObject.SetActive(false);
        Destroy(load.gameObject);
    }

    public void SaveButton()
    {
        SaveLoadManager save = Instantiate(Resources.Load<SaveLoadManager>("SaveUI"));
        DataForSave();
        save.gameObject.SetActive(true);
        float time = 0;
        while (time <= 1)
        {
            time += (Time.unscaledDeltaTime / 1000);
            save.canvasGroup.alpha = Mathf.Lerp(0f, 1f, time);
        }
    }

    public void SaveExit()
    {
        SaveLoadManager save = FindObjectOfType<SaveLoadManager>();
        float time = 0;
        while (time <= 1)
        {
            time += Time.unscaledDeltaTime;
            save.canvasGroup.alpha = Mathf.Lerp(1f, 0f, time);
        }
        save.gameObject.SetActive(false);
        Destroy(save.gameObject);
    }




    [System.Serializable]

    class Saveoption
    {
        public float rightEye;
        public float leftEye;
        public float nose;
        public float rightEar;
        public float leftEar;
        public float frontRightArm;
        public float frontRightHand;
        public float frontLeftArm;
        public float frontLeftHand;
        public float backRightLeg;
        public float backRightFoot;
        public float backLeftLeg;
        public float backLeftFoot;
        public float tail;
        public float heart;
        public float lung;
        public float liver;
    }

    public void Save(int saveNum)
    {
        string path = Application.persistentDataPath + "Save.json" + saveNum;

        if (File.Exists(path))
        {
            SaveNum = saveNum;
            Warnming.SetActive(true);
        }
        else
        {
            Saveoption option = new Saveoption();

            option.rightEye = PlayerManager.instance.rightEye;
            option.leftEye = PlayerManager.instance.leftEye;
            option.nose = PlayerManager.instance.nose;
            option.rightEar = PlayerManager.instance.rightEar;
            option.leftEar = PlayerManager.instance.leftEar;
            option.frontRightArm = PlayerManager.instance.frontRightArm;
            option.frontRightHand = PlayerManager.instance.frontRightHand;
            option.frontLeftArm = PlayerManager.instance.frontLeftArm;
            option.frontLeftHand = PlayerManager.instance.frontLeftHand;
            option.backRightLeg = PlayerManager.instance.backRightLeg;
            option.backRightFoot = PlayerManager.instance.backRightFoot;
            option.backLeftLeg = PlayerManager.instance.backLeftLeg;
            option.backLeftFoot = PlayerManager.instance.backLeftFoot;
            option.tail = PlayerManager.instance.tail;
            option.heart = PlayerManager.instance.heart;
            option.lung = PlayerManager.instance.lung;
            option.liver = PlayerManager.instance.liver;

            string json = JsonUtility.ToJson(option);
            File.WriteAllText(Application.persistentDataPath + "Save.json" + saveNum, json);
        
        }
    }

    public void Load(int saveNum)
    {
        string path = Application.persistentDataPath + "Save.json" + saveNum;

        if (File.Exists(path))
        {
            LoadNum = saveNum;
            Warnming.SetActive(true);
        }
        else
        {
            return;
        }

    }


    public void WarmingButton()
    {
        string path = Application.persistentDataPath + "Save.json" + LoadNum;

        if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            Saveoption option = JsonUtility.FromJson<Saveoption>(json);

            PlayerManager.instance.rightEye = option.rightEye;
            PlayerManager.instance.leftEye = option.leftEye;
            PlayerManager.instance.nose = option.nose;
            PlayerManager.instance.rightEar = option.rightEar;
            PlayerManager.instance.leftEar = option.leftEar;
            PlayerManager.instance.frontRightArm = option.frontRightArm;
            PlayerManager.instance.frontRightHand = option.frontRightHand;
            PlayerManager.instance.frontLeftArm = option.frontLeftArm;
            PlayerManager.instance.frontLeftHand = option.frontLeftHand;
            PlayerManager.instance.backRightLeg = option.backRightLeg;
            PlayerManager.instance.backRightFoot = option.backRightFoot;
            PlayerManager.instance.backLeftLeg = option.backLeftLeg;
            PlayerManager.instance.backLeftFoot = option.backLeftFoot;
            PlayerManager.instance.tail = option.tail;
            PlayerManager.instance.heart = option.heart;
            PlayerManager.instance.lung = option.lung;
            PlayerManager.instance.liver = option.liver;

            PlayerManager.instance.DataforLoad();

        }
    }

    public void SaveWarmingButton()
    {
        Saveoption option = new Saveoption();

        option.rightEye = PlayerManager.instance.rightEye;
        option.leftEye = PlayerManager.instance.leftEye;
        option.nose = PlayerManager.instance.nose;
        option.rightEar = PlayerManager.instance.rightEar;
        option.leftEar = PlayerManager.instance.leftEar;
        option.frontRightArm = PlayerManager.instance.frontRightArm;
        option.frontRightHand = PlayerManager.instance.frontRightHand;
        option.frontLeftArm = PlayerManager.instance.frontLeftArm;
        option.frontLeftHand = PlayerManager.instance.frontLeftHand;
        option.backRightLeg = PlayerManager.instance.backRightLeg;
        option.backRightFoot = PlayerManager.instance.backRightFoot;
        option.backLeftLeg = PlayerManager.instance.backLeftLeg;
        option.backLeftFoot = PlayerManager.instance.backLeftFoot;
        option.tail = PlayerManager.instance.tail;
        option.heart = PlayerManager.instance.heart;
        option.lung = PlayerManager.instance.lung;
        option.liver = PlayerManager.instance.liver;

        string json = JsonUtility.ToJson(option);
        File.WriteAllText(Application.persistentDataPath + "Save.json" + SaveNum, json);
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


