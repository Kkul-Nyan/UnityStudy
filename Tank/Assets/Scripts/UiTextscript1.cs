using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiTextscript1 : MonoBehaviour
{
    private Text score;
    private int count;
    private int killpoint;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void Objectscore()
    {
        score.text += count;
    }
    public void Killscore()
    {
        score.text += killpoint;
    }
}