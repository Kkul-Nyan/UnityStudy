using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionManager : MonoBehaviour
{
    FullScreenMode screenMode;
    public Dropdown resolutionsDropdown;
    public Toggle fullscreenBtn;
    List<Resolution> resolutions = new List<Resolution>();
    int resolutionNum;
    public CanvasGroup canvasGroup;

    public void OpenUI()
    {
        OptionManager load = Instantiate(Resources.Load<OptionManager>("OptionUI"));
        load.gameObject.SetActive(true);
        float time = 0;
        while (time <= 1)
        {
            time += (Time.unscaledDeltaTime / 1000);
            load.canvasGroup.alpha = Mathf.Lerp(0f, 1f, time);
        }
        InitUI();
    }


    public void UIExit()
    {
        OptionManager option = FindObjectOfType<OptionManager>();
        float time = 0;
        while (time <= 1)
        {
            time += Time.unscaledDeltaTime;
            option.canvasGroup.alpha = Mathf.Lerp(1f, 0f, time);
        }
        option.gameObject.SetActive(false);
        Destroy(option.gameObject);
    }



    void InitUI()
    {
        for(int i = 0; i <Screen.resolutions.Length; i++)
        {
            if(Screen.resolutions[i].refreshRate ==60)
            {
                resolutions.Add(Screen.resolutions[i]);
            }    

        }
        /*foreach(Resolution item in resolutions)
        {
            Debug.Log(item.width + "x" + item.height + " " + item.refreshRate);
        }*/
        resolutionsDropdown.options.Clear();
        int optionNum = 0;


        foreach (Resolution item in resolutions)
        {
            Dropdown.OptionData option = new Dropdown.OptionData();
            option.text = item.width+ "x" + item.height + " " + item.refreshRate + "hz";
            resolutionsDropdown.options.Add(option);

            if(item.width == Screen.width && item.height == Screen.height)
            {
                resolutionsDropdown.value = optionNum;
            }
            optionNum++;
        }
        resolutionsDropdown.RefreshShownValue();
        fullscreenBtn.isOn = Screen.fullScreenMode.Equals(FullScreenMode.FullScreenWindow) ? true : false;

    }

    public void DropboxOptionChange(int x)
    {
        resolutionNum = x;
    }

    public void FullScreenBtn(bool isFull)
    {
        screenMode = isFull ? FullScreenMode.FullScreenWindow : FullScreenMode.Windowed;
    }

    public void OkBtnClick()
    {
        Screen.SetResolution(resolutions[resolutionNum].width, resolutions[resolutionNum].height, screenMode);
        OptionManager option = FindObjectOfType<OptionManager>();
        float time = 0;
        while (time <= 1)
        {
            time += Time.unscaledDeltaTime;
            option.canvasGroup.alpha = Mathf.Lerp(1f, 0f, time);
        }
        option.gameObject.SetActive(false);
        Destroy(option.gameObject);
    }
}


