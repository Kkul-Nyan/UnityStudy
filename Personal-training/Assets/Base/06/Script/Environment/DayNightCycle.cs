using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class DayNightCycle : MonoBehaviour
{
    
    [FoldoutGroup("Info")]
    [Range(0f, 1f)]public float time;
    [FoldoutGroup("Info")]public float fullDayLength;
    [FoldoutGroup("Info")]public float startTime = 0.4f;
    [FoldoutGroup("Info")]private float timeRate;
    [FoldoutGroup("Info")]public Vector3 noon;


    
    [HorizontalGroup("Split", 0.5f, LabelWidth = 20)]
    [FoldoutGroup("Split/Sun")]public Light sun;
    [FoldoutGroup("Split/Sun")]public Gradient sunColor;
    [FoldoutGroup("Split/Sun")]public AnimationCurve sunIntensity;

    [FoldoutGroup("Split/Moon")]public Light moon;
    [FoldoutGroup("Split/Moon")]public Gradient moonColor;
    [FoldoutGroup("Split/Moon")]public AnimationCurve moonIntensity;

    
    [FoldoutGroup("Other Setting")]public AnimationCurve lightingIntensityMultiplier;
    [FoldoutGroup("Other Setting")]public AnimationCurve reflectionsIntensityMultipler;
    public static DayNightCycle instance;
    private void Awake() {
        instance = this;
    } 

    void Start() {
        timeRate = 1.0f / fullDayLength ;
        time = startTime;
    }
    private void Update() {
        IncreaseTime();
        LightRotation();
        LightIntensity();
        EnableSun();
        EnableMoon();
        LightingAndReflectionsInsensity();
    }

    void IncreaseTime() {
        time += timeRate * Time.deltaTime;
        if(time >= 1.0f){
            time = 0f;
        }
    }

    void LightRotation(){
        sun.transform.eulerAngles = (time - 0.25f) * noon * 4.0f;
        moon.transform.eulerAngles = (time - 0.75f) * noon * 4.0f;
        
        if(sun.transform.eulerAngles.x < 180f && sun.transform.eulerAngles.x > 0f){
            RenderSettings.sun = sun;
        }
        else{
            RenderSettings.sun = moon;
        }
    }

    void LightIntensity(){
        sun.intensity = sunIntensity.Evaluate(time);
        moon.intensity = moonIntensity.Evaluate(time);
    }
    
    void ChangeColors(){
        sun.color = sunColor.Evaluate(time);
        moon.color = moonColor.Evaluate(time);
    }

    void EnableSun() {
        if(sun.intensity == 0 && sun.gameObject.activeInHierarchy){
            sun.gameObject.SetActive(false);
        }
        else if(sun.intensity > 0 && !sun.gameObject.activeInHierarchy){
            sun.gameObject.SetActive(true);
        }
    }
    void EnableMoon() {
        if(moon.intensity == 0 && moon.gameObject.activeInHierarchy){
            moon.gameObject.SetActive(false);
        }
        else if(moon.intensity > 0 && !moon.gameObject.activeInHierarchy){
            moon.gameObject.SetActive(true);
        }
    }

    void LightingAndReflectionsInsensity(){
        RenderSettings.ambientIntensity = lightingIntensityMultiplier.Evaluate(time);
        RenderSettings.reflectionIntensity = reflectionsIntensityMultipler.Evaluate(time);
    }
}
