using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellController2 : MonoBehaviour
{
    public ParticleSystem shellExplosion;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void OnCollisionEnter(Collision coll)
    {
        ParticleSystem fire = Instantiate(shellExplosion, transform.position, transform.rotation);
        fire.Play(); //  ÀÌÆÑÆ®Àç»ý
        Destroy(gameObject);
        //Destroy(fire.gameObject);

        if (coll.collider.tag == "Enemy")
        {
            GameObject manager = GameObject.Find("ScriptManager");
            manager.GetComponent<UiTextscript>().Objectscore();
        }

        if (coll.collider.tag == "Player")
        {
            GameObject manager = GameObject.Find("ScriptManager");
            manager.GetComponent<UiTextscript>().Killscore();
        }
    }
}
