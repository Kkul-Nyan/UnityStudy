/// <summary>
/// AS_TreeTerrain written by Paul Tricklebank.
/// Add this script to a terrain positioned at 0,0,0 and do not add tree colliders.
/// This script will generate colliders and add the tree damage script to each tree instance.
/// Because changes to the terrain at runtime are saved well, not 100% accurate,
/// Changes made at runtime are not reversed this script records information about
///Tree instances and replaces them at the end of runtime.
/// use for your own purposes. no credit required.

/// </summary>

using UnityEngine;
using System.Collections;

public class AS_TreeTerrain : MonoBehaviour {
public Terrain terrain;
private TreeInstance[] _originalTrees;


void Start () {
    //terrain = GetComponent<Terrain>();
    // backup original terrain trees
    _originalTrees = terrain.terrainData.treeInstances;
    // create capsule collider for every terrain tree
    for (int i = 0; i < terrain.terrainData.treeInstances.Length; i++) {
        TreeInstance treeInstance = terrain.terrainData.treeInstances[i];
        GameObject capsule = GameObject.CreatePrimitive(PrimitiveType.Capsule);
        CapsuleCollider capsuleCollider = capsule.GetComponent<Collider>() as CapsuleCollider;
        capsuleCollider.center = new Vector3(0, 5, 0);
        capsuleCollider.height = 10;
        AS_DestroyableTree tree = capsule.AddComponent<AS_DestroyableTree>();
        tree.terrainIndex = i;
        capsule.transform.position = Vector3.Scale(treeInstance.position, terrain.terrainData.size);
        capsule.tag = "Tree";
        capsule.transform.parent = terrain.transform;
        capsule.GetComponent<Renderer>().enabled = false;

    }
}
void OnApplicationQuit() {
    // restore original trees
    terrain.terrainData.treeInstances = _originalTrees;
}
}