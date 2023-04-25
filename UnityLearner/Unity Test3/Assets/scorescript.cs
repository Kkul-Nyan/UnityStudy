using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scorescript : MonoBehaviour
{
    private Text score;
    private int count;
    private int target1c ;
    private int target2c ;
    private int target3c ;


    // Start is called before the first frame update
    void Start()
    {
        this.score = GameObject.Find("Score").GetComponent<Text>();
        count = 1;
        target1c = 10;
        target2c = 5;
        target3c = 3;
}

    // Update is called once per frame
    void Update()
    {
        
    }
    public void IncScore()
    {
        score.text = (int.Parse(score.text) + count).ToString() ;
    }
    public void IncScore1()
    {
        score.text = (int.Parse(score.text) + target1c).ToString();
    }
    public void IncScore2()
    {
        score.text = (int.Parse(score.text) + target2c).ToString();
    }
    public void IncScore3()
    {
        score.text = (int.Parse(score.text) + target3c).ToString();
    }
}
