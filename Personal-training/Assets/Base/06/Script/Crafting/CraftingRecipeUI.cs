using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Sirenix.OdinInspector;

public class CraftingRecipeUI : MonoBehaviour
{
    [Title("Info")]
    public CraftingRecipe recipe;
    public TextMeshProUGUI itemName;
    [HorizontalGroup("Image", 0.5f, LabelWidth = 20)]
    [BoxGroup("Image/BG")][HideLabel]
    public Image backgroundImage;
    [BoxGroup("Image/Icon")][HideLabel]
    public Image icon;

    [HorizontalGroup("Color", 0.5f, LabelWidth = 20)]
    [BoxGroup("Color/CanColor")][HideLabel]
    public Color canCraftColor;
    [BoxGroup("Color/NotColor")][HideLabel]
    public Color cannotCraftColor;
    [Title("NeedItem")]
    public Image[] resourceCosts;
    private bool canCraft =false;

    void OnEnable(){
        UpdateCanCraft();
    }

    public void UpdateCanCraft(){
        canCraft = true;

        for(int i = 0; i < recipe.cost.Length; i++){
            if(!Inventory.instance.HasItem(recipe.cost[i].item, recipe.cost[i].quantitiy)){
                canCraft = false;
                break;
            }
        }

        backgroundImage.color = canCraft ? canCraftColor : cannotCraftColor;

    }

    private void Start() {
        icon.sprite = recipe.itemToCraft.icon;
        itemName.text = recipe.itemToCraft.displayName;

        for(int i = 0; i < resourceCosts.Length; i++){
            if(i < recipe.cost.Length){
                resourceCosts[i].gameObject.SetActive(true);
                resourceCosts[i].sprite = recipe.cost[i].item.icon;
                resourceCosts[i].transform.GetComponentInChildren<TextMeshProUGUI>().text = recipe.cost[i].quantitiy.ToString();
            }
            else{
                resourceCosts[i].gameObject.SetActive(false);
            }
        }
    }
    public void OnClickButton(){
        if(canCraft){
            CraftingWindow.instance.Craft(recipe);
        }
    }
}
