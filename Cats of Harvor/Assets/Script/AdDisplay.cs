using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;


public class AdDisplay : MonoBehaviour
{
    public string myGameIdAndroid = "4898843";
    public string myGameIdIOS = "4898842";

    public string adUnitIdAndroid = "Interstitial_Android";
    public string adUnitIdIOS = "Interstitial_iOS";

    public string myAdUnitId;
    public bool adStarted;

    private bool testMode = true;

    private void Start()
    {
#if UNITY_IOS
        Advertisement.Initialize(myGameIdIOS, testMode);
        myAdUnitId = adUnitIdIOS;
#else
        Advertisement.Initialize(myGameIdAndroid, testMode);
        myAdUnitId = adUnitIdAndroid;
#endif

    }

    private void Update()
    {
        if(Advertisement.isInitialized && !adStarted)
        {
            Advertisement.Load(myAdUnitId);
            Advertisement.Show(myAdUnitId);
            adStarted = true;
        }
    }
}
