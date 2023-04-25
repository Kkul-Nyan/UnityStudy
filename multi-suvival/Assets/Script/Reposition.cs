using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Reposition : MonoBehaviour
{
    Collider2D coll;
    public float tilemapSize = 40;

    private void Awake() {
        coll = GetComponent<Collider2D>();
    }
   private void OnTriggerExit2D(Collider2D other) {
    if(!other.CompareTag("Area")){
       return; 
    }

    Vector3 playerPos = GameManager.instance.player.transform.position;
    Vector3 myPos = transform.position;
    float diffx = Mathf.Abs(playerPos.x - myPos.x);
    float diffy = Mathf.Abs(playerPos.y - myPos.y);

    Vector3 playerDir = GameManager.instance.player.inputVec;
    float dirX = playerDir.x < 0 ? -1 : 1;
    float dirY = playerDir.y < 0 ? -1 : 1;

    switch (transform.tag) {
        case "Ground":
            if(diffx > diffy){
                transform.Translate(Vector3.right * dirX * tilemapSize);
            }
            else if(diffx < diffy){
                transform.Translate(Vector3.up * dirY * tilemapSize);
            }
            break;
        case "Enemy":
            if(coll.enabled){
                transform.Translate(playerDir * 20 + new Vector3(Random.Range(-3f,3f), Random.Range(-3f, 3f), 0));
            }
            break;
    }

   }
}
