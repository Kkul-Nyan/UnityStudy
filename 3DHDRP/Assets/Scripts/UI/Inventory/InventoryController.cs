using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;
using UnityEngine.Rendering;

public class InventoryController : MonoBehaviour
{
    
    private ItemGrid selectedItemGrid;

    public ItemGrid SelectedItemGrid
    {
        get => selectedItemGrid;
        set {
            selectedItemGrid = value;
            inventoryHighLight.SetParent(value);
        }
    }

    public GameObject inventoryWindow;
    public GameObject detailInventoryWindow;
    PlayerController controller;

    InventoryItem selectedItem;
    InventoryItem overlapItem;
    RectTransform rectTransform;
 
    ItemGrid detailedGrid;
    
    [SerializeField] List<ItemData> items;
    [SerializeField] GameObject itemPrefab;
    [SerializeField] Transform gridTransform;
    [SerializeField] Transform dropPosition;

    Vector2Int oldPosition;
    InventoryHighLight inventoryHighLight;

    bool isInventoryOpen;

    InventoryItem itemToHighlight;
    Vector2Int itemToDetail;

    GameObject loadedPrefab;


    #region 기본 유니티 전처리과정
    private void Awake() {
        inventoryHighLight = GetComponent<InventoryHighLight>();
        controller = GetComponent<PlayerController>();
        loadedPrefab = Resources.Load<GameObject>("Prefabs/Item");
        Debug.Log(loadedPrefab.name);
    }
    private void Start() {
        detailInventoryWindow.SetActive(false);
        inventoryWindow.SetActive(false);

    }
    void Update()
    {
        if(isInventoryOpen){
            ItemIconDrag();
            
            if(Input.GetKeyDown(KeyCode.Q)){
                if(selectedItem == null){
                    CreateRandomItem();
                }
            }

            if(Input.GetKeyDown(KeyCode.R)){
                RotateItem();
            }
            HandleHighlight(); 
        }  
    }
    #endregion
    
    #region 아이탬 생성관련(테스트용)
    public void AddItem(ItemData item)
    {
        
        InventoryItem inventoryItem = Instantiate(loadedPrefab).GetComponent<InventoryItem>();
        
        rectTransform = inventoryItem.GetComponent<RectTransform>();
        //rectTransform.SetParent(gridTransform);
        rectTransform.SetAsLastSibling();

        inventoryItem.Set(item);

        if(!InsertListItem(inventoryItem)){
            DropItem(inventoryItem);
        }    
    }

    private bool InsertListItem(InventoryItem itemToInsert)
    {
        ItemGrid[] grids = inventoryWindow.GetComponentsInChildren<ItemGrid>();
        for(int i = 0; i < grids.Length; i++){
            Vector2Int? posOnGrid = grids[i].FindSpaceForObject(itemToInsert);
            if(posOnGrid != null){ 
                grids[i].PlaceItem(itemToInsert, posOnGrid.Value.x, posOnGrid.Value.y);
                return true;
            }
        }
        return false;
 
    }

    private void CreateRandomItem()
    {
        InventoryItem inventoryItem = Instantiate(itemPrefab).GetComponent<InventoryItem>();
        selectedItem = inventoryItem;

        rectTransform = inventoryItem.GetComponent<RectTransform>();
        rectTransform.SetParent(gridTransform);
        rectTransform.SetAsLastSibling();

        int selectedItemId = UnityEngine.Random.Range(0, items.Count);
        inventoryItem.Set(items[selectedItemId]);
    }
    #endregion

    #region 아이탬하이라이트 및 회전 관련

    //하이라이트를 켜고끄고, 마우스를 따라 기존의 아이탬과 함께 아이탬경계를 하이라이트로 보여줍니다.
    private void HandleHighlight()
    {
        if(selectedItemGrid == null) { return; }
        Vector2Int positionOnGrid = GetTileGridPosition();

        if(oldPosition == positionOnGrid){return;}

        oldPosition = positionOnGrid;

        if(selectedItem == null){
            itemToHighlight = selectedItemGrid.GetItem(positionOnGrid.x, positionOnGrid.y);

            if(itemToHighlight != null){
                inventoryHighLight.Show(true);
                inventoryHighLight.SetSize(itemToHighlight);
                inventoryHighLight.SetPosition(selectedItemGrid, itemToHighlight);
            }
            else{
            inventoryHighLight.Show(false);
            }
        }
        else{
            //바운더리를 체크해서 바운더리 밖에서는 SetActive를 false 시켜서 작동 안하도록한다.
            inventoryHighLight.Show(selectedItemGrid.BoundaryCheck(
                positionOnGrid.x,
                positionOnGrid.y,
                selectedItem.WIDTH,
                selectedItem.HEIGHT
                ));
            inventoryHighLight.SetSize(selectedItem);
            inventoryHighLight.SetPosition(selectedItemGrid, selectedItem, positionOnGrid.x, positionOnGrid.y);
        }
    }
    private void RotateItem()
    {
        if(selectedItem == null){return;}
        selectedItem.Rotate();
    }

    private void ItemIconDrag()
    {
        if (selectedItem != null)
        {
            rectTransform.SetParent(gridTransform.GetComponent<RectTransform>());
            rectTransform.SetAsLastSibling();
            rectTransform.position = Input.mousePosition;
        }
    }
    #endregion

    #region 키세팅(Input) 스크립트
    public void OnOpenInventory(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed)
        {
            Toggle();
        }
    }

    public void OnDetailInventoryInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed && isInventoryOpen)
        {
            if (selectedItemGrid == null) { 
                inventoryHighLight.Show(false);
                return;
            }
            ClickDetailInventory();
        }
    }

    
    //클릭시, 그리드라면, GridInteract를 통해 아이탬그리드가 null이 아닐경우 작동
    public void OnClickInventoyInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed && isInventoryOpen)
        {
            if (selectedItemGrid == null) { 
                inventoryHighLight.Show(false);
                return;
            }
            LeftMouseButtonPress();
        }
    }

    public void OnDoubleClickInventoryInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed && isInventoryOpen)
        {
            detailInventoryWindow.SetActive(false);
            OnUseButton();
        }
    }

    
    #endregion

    #region Input 관련 스크립트
    private void ClickDetailInventory()
    {
        Vector2Int itemToDetailPos = GetTileGridPosition();
        
        InventoryItem detailedItem = selectedItemGrid.GetItem(itemToDetailPos.x, itemToDetailPos.y);

        if (detailedItem == null) { return; }
        itemToDetail = itemToDetailPos;
        detailedGrid = selectedItemGrid;
        DetailToggle();
    }

    private void DetailToggle()
    {
        RectTransform rectTransform = detailInventoryWindow.GetComponent<RectTransform>();

        if (detailInventoryWindow.activeInHierarchy)
        {
            detailInventoryWindow.SetActive(false);
            
        }
        else
        {
            detailInventoryWindow.SetActive(true);
            
            Vector2 mousePos = Input.mousePosition;
            Vector2 size = rectTransform.sizeDelta / 2;
            rectTransform.position = new Vector2(mousePos.x + size.x, mousePos.y + size.y);
        }
    }


    public void Toggle()
    {
        if (inventoryWindow.activeInHierarchy)
        {
            inventoryWindow.SetActive(false);
            controller.ToggleCursor(false);
            isInventoryOpen = false;
        }
        else
        {
            inventoryWindow.SetActive(true);
            controller.ToggleCursor(true);
            isInventoryOpen = true;
        }
    }

    private void LeftMouseButtonPress()
    {
        Vector2Int tileGridPosition = GetTileGridPosition();
        Debug.Log("tileGridPositin : "+ tileGridPosition.x + ":" + tileGridPosition.y);
        if (selectedItem == null)
        {
            PickUpItem(tileGridPosition);
        }
        else
        {
            PlaceItem(tileGridPosition);
        }
    }
    #endregion

    //마우스 클릭한 위치의 좌표를 확인해서, 그리드 내 좌표로 변환합니다.
    private Vector2Int GetTileGridPosition()
    {
        if(selectedItemGrid != null) {}
        Vector2 position = Input.mousePosition;

        //아이탬을 놓을 위치를 아이탬의 중심을 기준으로 놓게됨(없을시, 좌상단이 기준)
        if (selectedItem != null)
        {
            position.x -= (selectedItem.WIDTH - 1) * ItemGrid.tileSizeWidth / 2;
            position.y += (selectedItem.HEIGHT - 1) * ItemGrid.tileSizeHeight / 2;
        }
       
        return selectedItemGrid.GetTileGridPosition(position);
    }
    
    #region LeftMouseButtonPress 관련
    private void PlaceItem(Vector2Int tileGridPosition)
    {
        bool complete = selectedItemGrid.PlaceItem(selectedItem, tileGridPosition.x, tileGridPosition.y, ref overlapItem);

        if(complete){
            selectedItem = null;
            if(overlapItem != null){
                selectedItem = overlapItem;
                overlapItem = null;
                rectTransform = selectedItem.GetComponent<RectTransform>();
                
            }
        }
    }

    private void PickUpItem(Vector2Int tileGridPosition)
    {
        selectedItem = selectedItemGrid.PickUpItem(tileGridPosition.x, tileGridPosition.y);
        if (selectedItem != null)
        {
            rectTransform = selectedItem.GetComponent<RectTransform>();
        }
    }
    #endregion

    #region 디테일 버튼 관리
    public void OnPickUpButton(){
        selectedItem = detailedGrid.PickUpItem(itemToDetail.x, itemToDetail.y);
        if (selectedItem != null)
        {
            rectTransform = selectedItem.GetComponent<RectTransform>();
        }

        detailInventoryWindow.SetActive(false);
    }

    public void OnUseButton(){
        Debug.Log("Use!!");
        detailInventoryWindow.SetActive(false);
    }

    public void OnDivisionButton(){
        Debug.Log("Check!!");
        detailInventoryWindow.SetActive(false);
    }

    public void OnThrowButton()
    {
        InventoryItem item = detailedGrid.GetItem(itemToDetail.x, itemToDetail.y);
        
        DropItem(item);

        Destroy(item.gameObject);

        detailInventoryWindow.SetActive(false);
    }

    private void DropItem(InventoryItem item)
    {
        Instantiate(item.itemData.dropPrefab, dropPosition.position, quaternion.identity);
    }

    #endregion
}
