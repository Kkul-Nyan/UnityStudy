using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class endscore : MonoBehaviour
{
    public TextMesh txtResult;
    // Start is called before the first frame update
    void Start()
    {
        int nScore = singletonManager.Instance.GetScore();
        txtResult.text = nScore.ToString();
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
