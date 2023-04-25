using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class FirstScore : MonoBehaviour
{
    public int score;
    public TextMeshProUGUI scoretext;

    private void Start() {
        scoretext.text = "Score : 0";
    }
    public void IncreaseScore(int amount) {
        score += amount;
        UpdateScoreText();
    }
    private void UpdateScoreText(){
        scoretext.text = "Score: "+ score;
    }
}
