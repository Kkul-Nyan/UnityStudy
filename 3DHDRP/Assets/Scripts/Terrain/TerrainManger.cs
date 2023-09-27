using UnityEngine;
using System.Collections;

public class TerrainManger : MonoBehaviour {
public Terrain terrain;
private TreeInstance[] _originalTrees;


void Start ()
    {
        SaveOriginalTreeInfo();
        TreeCollider();
    }

    private void SaveOriginalTreeInfo()
    {
        _originalTrees = terrain.terrainData.treeInstances;
    }

    private void TreeCollider()
    {
        for (int i = 0; i < terrain.terrainData.treeInstances.Length; i++)
        {
            //터레인 트리스 인스턴스를 변수화
            TreeInstance treeInstance = terrain.terrainData.treeInstances[i];

            //캡슐콜라이더 생성, 위치 및 사이즈 조절
            GameObject capsule = GameObject.CreatePrimitive(PrimitiveType.Capsule);
            CapsuleCollider capsuleCollider = capsule.GetComponent<Collider>() as CapsuleCollider;
            capsuleCollider.center = new Vector3(0, 5, 0);
            capsuleCollider.height = 10;

            //터레인 트리스 인스턴스에 Interactive스크립트 적용
            TerrainTreeInteractive tree = capsule.AddComponent<TerrainTreeInteractive>();
            tree.terrainIndex = i;
            capsule.transform.position = Vector3.Scale(treeInstance.position, terrain.terrainData.size);
            capsule.tag = "Tree";
            capsule.transform.parent = terrain.transform;
            capsule.GetComponent<Renderer>().enabled = false;
        }
    }

    void OnApplicationQuit() {
    // 저장해둔 원래 트리정보 복구
    terrain.terrainData.treeInstances = _originalTrees;
}
}