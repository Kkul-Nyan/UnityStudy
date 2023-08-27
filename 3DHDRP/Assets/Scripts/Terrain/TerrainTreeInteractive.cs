using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TerrainTreeInteractive : MonoBehaviour {
    public int terrainIndex;
    //the prefab to instatiate when a tree is removed.
    //this prefab is loaded from the Resources folder
    public float time = 0f;
    public ItemData itemToGive;
    public int capacity;


    private AudioSource hitaudio;
    public AudioClip hitSound;

    void Start()
    {
        hitaudio = GetComponent<AudioSource>();
        GetComponent<AudioSource>().clip = hitSound;   
    }

    private void Update()
    {
        Test();
    }

    private void Test()
    {
        time += Time.deltaTime;
        if (time > 5f)
        {
            Delete();
        }
    }

    public void Gather(Vector3 hitPoint, Vector3 hitNormal)
    {
        capacity -= 1;
        GetComponent<AudioSource>().Play();

        if(capacity <= 0){ 
            Delete();
        }
    }


    public void Delete() {
        Terrain terrain = Terrain.activeTerrain;
        //현재 Terrain에 있는 모든 나무 정보를 가져와서 리스트 trees에 복사합니다.
        List<TreeInstance> trees = new List<TreeInstance>(terrain.terrainData.treeInstances);
        //terrainIndex 위치에 해당하는 나무 정보를 새로운 빈 TreeInstance로 대체합니다. 이는 나무를 삭제하는 부분입니다.
        trees[terrainIndex] = new TreeInstance();
        //trees를 Terrain의 나무 정보로 업데이트합니다. 이로써 해당 나무가 삭제되었음을 Terrain에 반영합니다.
        terrain.terrainData.treeInstances = trees.ToArray();
        Instantiate (itemToGive, this.transform.position, this.transform.rotation);
        Destroy(gameObject);
    }


}