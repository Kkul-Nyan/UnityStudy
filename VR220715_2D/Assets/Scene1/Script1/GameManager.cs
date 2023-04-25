using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Transform[] spawnPoints;
    public Transform[] randEnemyType;
    public GameObject goEnemy;
    public GameObject goEnemy2;
    public float curEnemySpawnDelay;

    public GameObject goPlayer;
    public Image[] imglifes;
  
    public Text goScoretext;
    public GameObject goGameOver;
    public ObjectManager objmanager;
    public List<spawn> spawnList;


    public string[] enemyNames = { "A", "B" };

    public class spawn
    {
        public float delay;//��Ÿ���½ð�
        public string tpye;//����Ÿ��
        public int point;//��������Ʈ 
    };

    public int spawnIdx = 0;
    public bool spawnEnd;

    public float nextEnemySpawnDelay;


    void Awake()
    {
        spawnList = new List<spawn>();
        ReadSpawn();
    }
    void Start()
    {
        goGameOver.SetActive(false);
        
    }

    void ReadSpawn()
    {
        spawnList.Clear();
        spawnIdx = 0;
        spawnEnd = false;
    
        TextAsset textFile = Resources.Load("stage") as TextAsset;
        StringReader stringReader = new StringReader(textFile.text);

        while(stringReader != null)
        {
            string txtLineDate =stringReader.ReadLine();
            Debug.Log(txtLineDate);
            if(txtLineDate == null)
            {
                break;
            }

            spawn data = new spawn();
            data.delay = float.Parse(txtLineDate.Split(',')[0]);
            data.tpye = txtLineDate.Split(',')[1];
            data.point = int.Parse(txtLineDate.Split(',')[2]);

            spawnList.Add(data);

            nextEnemySpawnDelay = spawnList[0].delay;
        }
        stringReader.Close();
    }

    void Update()
    {
        curEnemySpawnDelay += Time.deltaTime;
        if(curEnemySpawnDelay > nextEnemySpawnDelay && !spawnEnd)
        {
            SpawnEnemy();
            curEnemySpawnDelay = 0;
        }
        Player1 playerLogic =goPlayer.GetComponent<Player1>();
        goScoretext.text = string.Format("{0:n0}", playerLogic.score);

    }

    void SpawnEnemy()
    {
        int enemyIdx = 0;
        switch(spawnList[spawnIdx].tpye)
        {
            case "A":
                {
                    enemyIdx = 0;
                }
                break;
            case "B":
                {
                    enemyIdx = 1;
                }
                break;
        }


        if (curEnemySpawnDelay < nextEnemySpawnDelay)
        {
            return;
        }
        int enemyPoint = spawnList[spawnIdx].point;       //int randPoint = Random.Range(0, 3);
        string enemyName = enemyNames[enemyIdx];
        //int randEnemyType = Random.Range(0, 2);
        // GameObject createEnemy = Instantiate(goEnemy, spawnPoints[randEnemyType].position, spawnPoints[randEnemyType].rotation);
        GameObject createEnemy = objmanager.MakeObject(enemyName);
        createEnemy.transform.position = spawnPoints[enemyPoint].position;

        Rigidbody2D rd = createEnemy.GetComponent<Rigidbody2D>();
        Enemy1 enemy = createEnemy.GetComponent<Enemy1>();
        

        rd.velocity = new Vector2(0, enemy.speed * (-1));
            
        nextEnemySpawnDelay = Random.Range(3f, 5f);
       
        enemy.objmanager = objmanager;
        enemy.goPlayer = goPlayer; //������ ���⼭ �����ǹǷ� �����Ǹ鼭 goPlayer ������ ��������.

        spawnIdx++;
        if(spawnIdx == spawnList.Count)
        {
            spawnEnd = true;
            return;
        }
        nextEnemySpawnDelay = spawnList[spawnIdx].delay;
    }

    public void RespawnPlayer()
    {
        Invoke("AlivePlayer", 2.0f);
    }

    void AlivePlayer()
    {
        goPlayer.transform.position = Vector2.down * 3.5f;
        goPlayer.SetActive(true);
        Player1 PlayerLogic = goPlayer.GetComponent<Player1>();
        PlayerLogic.isHit = false;
    }
    public void UpdateLifeIcon(int life)
    {
        for(int idx =0; idx <3; idx ++)
        {
            imglifes[idx].color = new Color(1, 1, 1, 0);
        }
        for(int idx =0; idx < life; idx++)
        {
            imglifes[idx].color = new Color(1, 1, 1, 1);
        }


    }
    
    public void GameOver()
    {
        goGameOver.SetActive(true);
    }
    public void startgame()
    {
        SceneManager.LoadScene(0);
        Time.timeScale = 1;
    }

}

