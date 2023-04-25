using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

[CreateAssetMenu(fileName = "Building Recipe", menuName = "New Building Recipe")]
public class BuildingRecipe : ScriptableObject
{
    [Title("Building Info")]
   public string displayName;
   [PreviewField(80, alignment: ObjectFieldAlignment.Center)]public Sprite icon;
   [PreviewField(80, alignment: ObjectFieldAlignment.Center)]public GameObject  spawnPrefab;
   [PreviewField(80, alignment: ObjectFieldAlignment.Center)]public GameObject previewPrefab;
   public ResoruceCost[] cost;
}
