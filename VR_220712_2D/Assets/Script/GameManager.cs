using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    // Start is called before the first frame update
    public int score = 0;
    public GameObject objects;
    public Text scoreText;
    public Text first;

    private float timer;

    private void Awake()
    {


    }
    void Start()
    {
        Time.timeScale = 0;
        InvokeRepeating("CreateObjects", 1.5f, 1.5f);
       // StartCoroutine(MyCoroutine());
    }

    /* Update is called once per frame
    IEnumerator MyCoroutine()
    {
       // yield return new WaitForSeconds(2.0f);
        yield return new WaitForSecondsRealtime(2.0f);
        while (true)
        {
            Instantiate(objects, new Vector3(7.5f, Random.Range(-1.5f, 1.6f), 0), Quaternion.identity);
        }
    }
    */
    void Update()
    {
        scoreText.text = Score.ToString();
    }
    
    void LateUpdate()
    {
        start();
    }
    void CreateObjects()
    {
        if (Time.timeScale != 0)
        {
            Instantiate(objects, new Vector3(7.5f, Random.Range(-1.5f, 3.0f) * Time.deltaTime, 0), Quaternion.identity);
        }
    }
    public int Score
    {
        set
        {
            score = value;
            scoreText.text = Score.ToString();
        }
        get
        {
            return score;
        }
    }
    public void gameOver()
    {
        SceneManager.LoadScene(1);
    }
    public void start()
    {

        if (Time.timeScale == 0 && first.gameObject.active == true)
        {
            if (Input.anyKey)
            {
                first.gameObject.SetActive(false);
                Time.timeScale = 1;
            }
        }
    }

}
