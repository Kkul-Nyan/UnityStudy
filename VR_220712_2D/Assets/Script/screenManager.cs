using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class screenManager : MonoBehaviour
{
    public GameManager score;
    // Start is called before the first frame update
    void Start()
    {
        singletonManager.Instance.nScore = score.Score;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetAxis("Jump") == 1)
        {
            singletonManager.Instance.SetScore(score.Score);
            
        }
    }
}
