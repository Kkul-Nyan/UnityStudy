using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public class ButtonController : MonoBehaviour
{
    InventoryController inventoryController;
    public Button minimalBTN;
    public Sprite miniImage;
    public Sprite backImage;

    private void Start() {
        inventoryController = FindObjectOfType<InventoryController>();
    }

    public void CloseCanvas(){
        inventoryController.CheckClose();
    }

    public void MinimizeBTN(){
        int cursprite =  inventoryController.Minimize();
        if(cursprite == 0){
            minimalBTN.GetComponent<Image>().sprite =  miniImage;
        }
        else{
            minimalBTN.GetComponent<Image>().sprite =  backImage;
            
        }
    }

    [Button]
    public void Test(){
        minimalBTN.GetComponent<Image>().sprite =  miniImage;
    }

    [Button]
    public void Test2(){
        minimalBTN.GetComponent<Image>().sprite =  backImage;
    }
}
