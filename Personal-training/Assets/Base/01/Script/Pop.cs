using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Pop : MonoBehaviour
{
    
    public int clicksToPop = 5;
    public int scoreToGive = 1;
    public FirstScore firstScore;
    
    public float scaleIncrease = .1f;
    private void OnMouseDown()
    {
        clicksToPop -= 1;
        transform.localScale += Vector3.one * scaleIncrease;
        if (clicksToPop == 0)
        {
            firstScore.IncreaseScore(scoreToGive);
            Destroy(gameObject);
        }
    }

}
