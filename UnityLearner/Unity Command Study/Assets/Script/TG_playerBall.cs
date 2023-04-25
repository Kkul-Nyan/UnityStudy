using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TG_playerBall : MonoBehaviour
{
    Rigidbody player;
    public int Score;
    public float sh = 0.5f;
    public float sv = 0.5f;
    public float sj = 5.0f;
    AudioSource caudio;
    bool isjump;
    public TG_GM manager;
   


    void Awake()
    {
        isjump = false;
        player = GetComponent<Rigidbody>();
        caudio = GetComponent<AudioSource>();
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Jump") && !isjump)
        {
            isjump = true;
            player.AddForce(Vector3.up * sj, ForceMode.Impulse);
        }

    }

    private void FixedUpdate()
    {
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");
        player.AddForce(new Vector3(h * sh, 0, v * sv), ForceMode.Impulse);
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Floor")
        {
            isjump = false;
        }
        
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Coin")
        {
            Score++;
            manager.GetItem(Score);
           
            caudio.Play();
            
            other.gameObject.SetActive(false);
        }

        else if(other.tag == "Finish") 
        {
            if( Score == manager.TotalItemCount)
            {
                (manager.stage + 1).ToString();
                SceneManager.LoadScene("SampleScene");

            }
            else
            {
                manager.stage.ToString();
                SceneManager.LoadScene("TestGame(EatCoin)");
                
            }
        }

        
    }
}
