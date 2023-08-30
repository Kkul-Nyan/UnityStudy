using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public class WindowController : MonoBehaviour
{
    InventoryController inventoryController;
    RectTransform rectTransform;
    public RectTransform top;
    ItemGrid itemGrid;
    CharactorEquip charactorEquip;
  
    public Button minimalBTN;
    public Sprite miniImage;
    public Sprite backImage;

    public Vector2 bgSize = new Vector2(40, 60);
    public Vector2 equipSize = new Vector2();
    bool isMinimize = false;
    public bool includeEquip = false; 

    private void Awake() {
        inventoryController = FindObjectOfType<InventoryController>();
        rectTransform = GetComponent<RectTransform>();
        top = this.transform.parent.GetComponent<RectTransform>();
        itemGrid = top.GetComponentInChildren<ItemGrid>();
        charactorEquip = top.GetComponentInChildren<CharactorEquip>();
    }
    private void Start() {
        Init(itemGrid.GridWidthCount, itemGrid.GridHeightCount);
    }

    public void Init(int width, int height){
        if(includeEquip ){
            Debug.Log(
                "Width : " + width + ", Higth : "+ height 
            );
            Vector2 size = new Vector2((width * ItemGrid.tileSizeWidth) + (bgSize.x * 2) + equipSize.x, (height * ItemGrid.tileSizeHeight)+ bgSize.y);
            top.sizeDelta = size;
        }
        else{
            Vector2 size = new Vector2(width * ItemGrid.tileSizeWidth + bgSize.x * 2, height * ItemGrid.tileSizeHeight + bgSize.y);
            top.sizeDelta = size;
        }
    }

    public void CloseBTN(){
        top.gameObject.SetActive(false);
        inventoryController.CheckClose();
    }

    public void MinimizeBTN(){
        if(!isMinimize){
            //최소화
            Init(itemGrid.GridWidthCount, 0);

            itemGrid.gameObject.SetActive(false);
            charactorEquip.gameObject.SetActive(false);

            isMinimize = true;
            minimalBTN.GetComponent<Image>().sprite =  backImage;
        }
        else{
            //원래
            Init(itemGrid.GridWidthCount, itemGrid.GridHeightCount);
            itemGrid.GirdSizeInit(itemGrid.GridWidthCount, itemGrid.GridHeightCount);

            itemGrid.gameObject.SetActive(true);
            charactorEquip.gameObject.SetActive(true);

            isMinimize = false;
            minimalBTN.GetComponent<Image>().sprite =  miniImage;
        }
    }
}
