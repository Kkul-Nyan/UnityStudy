using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCcntroller : MonoBehaviour
{
    Rigidbody playerRB;
    public float jumpForce = 10;
    public float gravityModifier;
    public bool isOnGround = true;
    public bool GameOver  = false;

    private Animator playerAnim;
    public ParticleSystem explosionParticle;
    public ParticleSystem dirtParticle;
    
    public AudioClip jumpSound;
    public AudioClip crashSound;
    private AudioSource playerAudio;
    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        Physics.gravity *= gravityModifier;
        playerAnim =  GetComponent<Animator>();
        playerAudio = GetComponent<AudioSource>();
    }


    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space) && isOnGround && !GameOver) 
        {
          playerRB.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
          isOnGround =false;
          playerAnim.SetTrigger("Jump_trig");
          playerAudio.PlayOneShot(jumpSound,1.0f);
          dirtParticle.Stop();

        }
    }

    private void OnCollisionEnter(Collision other) 
    {
        if(other.gameObject.CompareTag("Ground") && !GameOver )
        {
            isOnGround =true;
            dirtParticle.Play();
        }
        else if(other.gameObject.CompareTag("Obstacle"))
        {
            Debug.Log("Game Over!");
            GameOver = true;
            playerAnim.SetBool("Death_b",true);
            dirtParticle.Stop();
            playerAnim.SetInteger("DeathType_int", 1);
            playerAudio.PlayOneShot(crashSound,1.0f);
            explosionParticle.Play();
            
        }
        
    }
}
