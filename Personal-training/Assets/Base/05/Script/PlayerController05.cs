using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PlayerController05 : MonoBehaviour
{
    public Rigidbody rig;
    public float moveSpeed = 5;
    public float jumpPower = 1;
    private bool isGroundeed;
    public int score;
    public TextMeshProUGUI scoreText;

    private void Start() {
        scoreText.text = "0";
    }
    private void Update()
    {
        MovePlayer();
        JumpPlayer();
        Falling();
    }
    void MovePlayer()
    {
        float x = Input.GetAxisRaw("Horizontal") * moveSpeed;
        float z = Input.GetAxisRaw("Vertical") * moveSpeed;

        rig.velocity = new Vector3(x, rig.velocity.y, z);

        Vector3 vel = rig.velocity;
        vel.y = 0;
        if (vel.x != 0 || vel.z != 0)
        {
            transform.forward = vel;
        }
    }

    void JumpPlayer()
    {
        if (isGroundeed == true && Input.GetKeyDown(KeyCode.Space))
        {
            isGroundeed = false;
            rig.AddForce(Vector3.up * jumpPower, ForceMode.Impulse);
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.GetContact(0).normal == Vector3.up)
        {
            isGroundeed = true;
        }
    }

    public void GameOver()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void Falling()
    {
        if (transform.position.y < -5)
        {
            GameOver();
        }
    }

    public void AddScore(int amount) {
        score += amount;
        scoreText.text = score.ToString();
    }

}
