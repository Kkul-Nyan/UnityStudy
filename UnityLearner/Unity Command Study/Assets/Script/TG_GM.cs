using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class TG_GM : MonoBehaviour
{
    public int TotalItemCount;
    public int stage;
    public Text stageCountTxt;
    public Text playerCountTxt;

    void Awake()
    {
        stageCountTxt.text = " / " +TotalItemCount.ToString();
    }
    // Start is called before the first frame update

    public void GetItem(int count)
    {
       playerCountTxt.text = count.ToString();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            SceneManager.LoadScene("TestGame(EatCoin)");
        }
    }
}
