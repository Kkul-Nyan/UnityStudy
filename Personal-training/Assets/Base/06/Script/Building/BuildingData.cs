using System.Collections;
using System.Collections.Generic;
using UnityEngine;



[CreateAssetMenu(fileName = "BuildingData", menuName = "New Building Data")]
public class BuildingData : ScriptableObject {
    public string id;
    public GameObject spawnPrefab;
}
