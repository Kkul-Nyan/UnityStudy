using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Sirenix.OdinInspector;
using UnityEngine.InputSystem;

public class BuildingRecipeUI : MonoBehaviour
{
    [Title("Info")] 
   public BuildingRecipe recipe;
   public TextMeshProUGUI buildingName;

   [HorizontalGroup("Image", 0.5f, LabelWidth = 20)]
   [BoxGroup("Image/BG")][HideLabel]
   public Image backgroundImage;
   [BoxGroup("Image/Icon")][HideLabel]
   public Image icon;

   [HorizontalGroup("Color", 0.5f, LabelWidth = 20)]
   [BoxGroup("Color/CanColor")][HideLabel]
   public Color canBuildColor;
   [BoxGroup("Color/NotColor")][HideLabel]
   public Color cannotBuildColor;
   [Title("NeedItem")]
   public Image[] resourceCosts;
   private bool canBuild;

   void OnEnable(){
        UpdateCanCraft();
   }

   private void Update() {
            if(Input.GetKey(KeyCode.Escape)){
            EquipBuildingKit.instance.buildingWindow.SetActive(false);
            PlayerController06.instance.ToggleCursor(false);
        }
   }
   private void Start() {
        icon.sprite = recipe.icon;
        buildingName.text = recipe.displayName;

        for(int x = 0; x < resourceCosts.Length; x++){
            if( x < recipe.cost.Length){
                resourceCosts[x].gameObject.SetActive(true);
                resourceCosts[x].sprite = recipe.cost[x].item.icon;
                resourceCosts[x].transform.GetComponentInChildren<TextMeshProUGUI>().text = recipe.cost[x].quantitiy.ToString();
            }
            else{
                resourceCosts[x].gameObject.SetActive(false);
            }
        }
   }

   void UpdateCanCraft(){
    canBuild = true;
    for(int x = 0; x < recipe.cost.Length; x++){
        if(!Inventory.instance.HasItem(recipe.cost[x].item, recipe.cost[x].quantitiy)){
            canBuild = false;
            break;
        }
    }
    backgroundImage.color = canBuild ? canBuildColor : cannotBuildColor;
   }

    public void OnClickButton() {
        if(canBuild){
            EquipBuildingKit.instance.SetNewBuildingRecipe(recipe);
        }
        else {
            PlayerController06.instance.ToggleCursor(false);
            EquipBuildingKit.instance.buildingWindow.SetActive(false);
        }

    }

    


}
    