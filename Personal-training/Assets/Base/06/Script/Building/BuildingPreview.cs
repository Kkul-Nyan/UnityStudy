using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class BuildingPreview : MonoBehaviour
{
    [HorizontalGroup("Split", 0.5f)]
    [BoxGroup("Split/Can", true,true)][HideLabel][PreviewField(80,alignment: ObjectFieldAlignment.Center)]
    public Material canPlaceMaterial;
    [BoxGroup("Split/Not", true,true)][HideLabel][PreviewField(80,alignment: ObjectFieldAlignment.Center)]
    public Material cannotPlaceMaterial;
    private MeshRenderer[] meshRenderers;
    private List<GameObject> collidingObjects = new List<GameObject>();

    void Awake(){
        meshRenderers = transform.GetComponentsInChildren<MeshRenderer>();
    }

    public void CanPlace(){
        SetMatherial(canPlaceMaterial);
    }
    public void CannotPlace(){
        SetMatherial(cannotPlaceMaterial);
    }

    void SetMatherial(Material mat){
        for(int x = 0; x < meshRenderers.Length; x++){
            Material[] mats = new Material[meshRenderers[x].materials.Length];

            for(int y = 0; y <mats.Length; y++){
                mats[y] = mat;
            }

            meshRenderers[x].materials = mats;
        }
    }

    public bool CollidingWithObjects(){
        collidingObjects.RemoveAll(x => x == null);
        return collidingObjects.Count > 0;
    }
    void OnTriggerEnter(Collider other) {
        if(other.gameObject.layer != 10){
            collidingObjects.Add(other.gameObject);
        }
    }
    void OnTriggerExit(Collider other) {
        if(other.gameObject.layer != 10){
            collidingObjects.Remove(other.gameObject);
        }
    }

}
