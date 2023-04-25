using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class Bed : Building, IInteractable
{   
    [Title("Base Info")]
    public float wakeUpTime;
    public float startCanSleepTime;
    public float endCanSleepTime;
    public float sleepToGive;
    public string GetInteractPrompt(){
        return CanSleep() ? "Sleep" : "Cna't Sleep";
    }
    public void OnInteract(){
        if(CanSleep()){
            DayNightCycle.instance.time = wakeUpTime;
            PlayerNeeds.instance.Sleep(sleepToGive);
        }
    }

    bool CanSleep(){
        return DayNightCycle.instance.time >= startCanSleepTime || DayNightCycle.instance.time <= endCanSleepTime;
    }

}
