using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    //프리팹 보관 변수
    public GameObject[] prefabs;

    //풀 담당 리스트들 
    List<GameObject>[] pools;
    private void Awake() {
        pools = new List<GameObject>[prefabs.Length];
        for (int i = 0; i < prefabs.Length; i++){
            pools[i] = new List<GameObject>();
        }
    }

    public GameObject Get(int index) {
        GameObject select = null;

        foreach (GameObject item in pools[index]){
            if (!item.activeSelf){
                select = item;
                select.SetActive(true);
                break;
            }
        }
        
        if(select == null){
            select = Instantiate(prefabs[index], transform);
            pools[index].Add(select);
        }

        return select;
    }
}
