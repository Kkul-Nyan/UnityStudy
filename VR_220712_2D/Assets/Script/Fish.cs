using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Fish : MonoBehaviour
{
    Rigidbody2D fish;
    public float speed= 5f;
    public float fj = 3f;
    public int count = 0;
    public GameManager manager;
    public AudioSource dieAudio;
    public AudioSource getpoint;
    

    // Start is called before the first frame update
    private void Awake()
    {
        fish = GetComponent<Rigidbody2D>();
       
    }
    void Start()
    {
    }

    // Update is called once per frame



    void Update()
    {

        if (Input.GetKey(KeyCode.Space) )
        {
            jump();
        }
    }


   
    public void jump()
    {
        fish.velocity = Vector2.zero;
        fish.AddForce(Vector2.up * fj, ForceMode2D.Impulse);

    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        if(coll.gameObject.name.Contains("pipe"))
        {
            
            manager.gameOver();
            dieAudio.Play();
        }
        if(coll.gameObject.tag == "point")
        {
            
            Destroy(coll);
            manager.score += 10;
            getpoint.Play();
        }
    }

}
