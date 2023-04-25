using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "NPC Data", menuName = "New NPC Data")]
public class NPCData : ScriptableObject 
{
    public string id;
    public GameObject spawnPrefab;
}

