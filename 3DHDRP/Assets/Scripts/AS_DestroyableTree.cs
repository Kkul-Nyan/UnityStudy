/// AS_DestroyableTree written by Paul Tricklebank.
///
/// This script gets added to each tree instance and handles tree damage and removal of tree instances.
/// use for your own purposes. no credit required.
/// </summary>

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AS_DestroyableTree : MonoBehaviour {
public int terrainIndex;
//the prefab to instatiate when a tree is removed.
//this prefab is loaded from the Resources folder
private GameObject Log;

//Each trees vp_HealthPickup level.
public float health;
public float time = 0f;


void Start()
{
    //set the trees health
    health = 20;
    //set the log prefab
    Log = Resources.Load<GameObject>("choppedTree"); //change this line and add your own prefab which will be instantiated when a tree is cut down
}

private void Update() {
    time += Time.deltaTime;
    if(time > 5f){
        Delete();
    }
}

/*
public void Damage(float damage)

{
    //deplete health. if it falls below 0 destroy the tree
    health = health - damage;

    if(health <=0)
    {
        Delete ();
    }
}
*/

public void Delete() {
    //remove the tree and instantiate the log prefab
    Terrain terrain = Terrain.activeTerrain;
    List<TreeInstance> trees = new List<TreeInstance>(terrain.terrainData.treeInstances);
    trees[terrainIndex] = new TreeInstance();
    terrain.terrainData.treeInstances = trees.ToArray();
    Instantiate (Log, this.transform.position, this.transform.rotation);
    Destroy(gameObject);
}


}