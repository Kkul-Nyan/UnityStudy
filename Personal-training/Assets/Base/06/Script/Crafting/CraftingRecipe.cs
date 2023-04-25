using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

[CreateAssetMenu(fileName = "Crafting Recipe", menuName = "New Crafting Recipe")]
public class CraftingRecipe : ScriptableObject
{
   [Title("Result")]
   public ItemData itemToCraft;
   [Title("NeedItem")] public ResoruceCost [] cost;
}


[System.Serializable]
public class ResoruceCost
{
    public ItemData item;
    public int quantitiy;
}