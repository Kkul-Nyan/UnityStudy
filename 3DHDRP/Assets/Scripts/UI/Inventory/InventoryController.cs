using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

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
    public WindowController selectedWindow;
    public GameObject selectedgrid;
    ItemGrid[] itemGrids;

    public GameObject inventoryWindow;
    public GameObject detailInventoryWindow;
    PlayerController controller;

    InventoryItem selectedItem;
    InventoryItem pickupItem;
    InventoryItem overlapItem;
    RectTransform rectTransform;
    
    [SerializeField] List<ItemData> items;
    [SerializeField] GameObject itemPrefab;
    [SerializeField] Transform gridTransform;
    [SerializeField] Transform dropPosition;

    Vector2Int oldPosition;
    Vector2 oldPos;

    InventoryHighLight inventoryHighLight;
    InventoryDescription inventoryDescription;

    public bool isInventoryOpen;

    InventoryItem itemToHighlight;
    InventoryItem itemForDescription;


    GameObject loadedPrefab;

    float clickTime;
    bool isDoubleClick;
    bool isDrag;

    #region 기본 유니티 전처리과정
    private void Awake() {
        inventoryHighLight = GetComponent<InventoryHighLight>();
        inventoryDescription = GetComponent<InventoryDescription>();
        controller = GetComponent<PlayerController>();
        loadedPrefab = Resources.Load<GameObject>("Prefabs/Item");
        itemGrids = FindObjectsOfType<ItemGrid>();;
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
                if(pickupItem == null){
                    CreateRandomItem();
                }
            }

            if(Input.GetKeyDown(KeyCode.R)){
                RotateItem();
            }

            HandleHighlight(); 
            DescribeUI();
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
                grids[i].PlaceItem(itemToInsert, posOnGrid.Value.x, posOnGrid.Value.y, grids[i]);
                return true;
            }
        }
        return false;
 
    }

    private void CreateRandomItem()
    {
        InventoryItem inventoryItem = Instantiate(itemPrefab).GetComponent<InventoryItem>();
        pickupItem = inventoryItem;

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
        if(selectedItemGrid == null) { 
            inventoryHighLight.Show(false); 
            itemToHighlight = null;
            return; 
        }
        Vector2Int positionOnGrid = GetTileGridPosition();
        
        if(oldPosition == positionOnGrid){return;}
        oldPosition = positionOnGrid; 

        if(pickupItem == null){
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
            inventoryDescription.Show(false);
            //바운더리를 체크해서 바운더리 밖에서는 SetActive를 false 시켜서 작동 안하도록한다.
            inventoryHighLight.Show(selectedItemGrid.BoundaryCheck(
                positionOnGrid.x,
                positionOnGrid.y,
                pickupItem.WIDTH,
                pickupItem.HEIGHT
                ));
            inventoryHighLight.SetSize(pickupItem);
            inventoryHighLight.SetPosition(selectedItemGrid, pickupItem, positionOnGrid.x, positionOnGrid.y);
        }
    }

    //하이라이트처럼 마우스가 위에 올라왔을떄 자동으로 아이탬설명창을 띄웁니다.
    void DescribeUI(){
        if(selectedItemGrid == null) { 
            inventoryDescription.Show(false);
            itemForDescription = null;
            return; 
        }
        Vector2Int positionOnGrid = GetTileGridPosition();

        if(pickupItem == null){
            if(selectedItem !=null){
                inventoryDescription.Show(false);
                return;
            }
            InventoryItem item = selectedItemGrid.GetItem(positionOnGrid.x, positionOnGrid.y);
            if(itemForDescription == item) { return;}
            
            itemForDescription = item;
            if(itemForDescription != null){
                inventoryDescription.Show(true);
                inventoryDescription.SetPosition();
                inventoryDescription.SetDesciption(itemForDescription);
            }
            else{
                inventoryDescription.Show(false);
            }
        }
        else{
            inventoryDescription.Show(false);
        }
    }

    private void RotateItem()
    {
        if(pickupItem == null){return;}
        pickupItem.Rotate();
    }

    private void ItemIconDrag()
    {
        if (pickupItem != null)
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
        if(context.phase == InputActionPhase.Started && isInventoryOpen)
        {
            if(pickupItem != null){
                PlaceItem(new Vector2Int(selectedItem.onGridPositionX, selectedItem.onGridPositionY)); 
            }

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
            
            if(selectedWindow != null){
                isDrag = true;
            }
            if(selectedItemGrid == null && pickupItem != null){
                DropItem(selectedItem);
                pickupItem = null;
                selectedItem = null;
                return;
            }

            if (selectedItemGrid == null) { 
                inventoryHighLight.Show(false);
                return;
            }

            if(clickTime - Time.time > - 0.15f && !isDoubleClick ){
                isDoubleClick = true;
                PlaceItem(new Vector2Int(selectedItem.onGridPositionX, selectedItem.onGridPositionY));
                UseItem();
                return;
            }

            LeftMouseButtonPress();
            
        }

        else if(context.phase == InputActionPhase.Canceled){
            isDrag = false;
            oldPos = Vector2.zero;
            if(isDoubleClick){
                clickTime = Time.time - 1f;
                isDoubleClick = false;
            }
            else{
                clickTime = Time.time;
            }
        }
    }

    public void OnVectorInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed && isDrag){
            Vector2 vector2 = context.ReadValue<Vector2>();
            if(oldPos == Vector2.zero){ oldPos = vector2; }
            if(oldPos == vector2){ return; }
            Vector2 moveVec = vector2 - oldPos;
            oldPos = vector2;

            selectedWindow.top.position += new Vector3(moveVec.x, moveVec.y, 0f);
        }
    }

    #endregion

    #region Input 관련 스크립트
    private void ClickDetailInventory()
    {
        Vector2Int itemToDetailPos = GetTileGridPosition();
        
        InventoryItem detailedItem = selectedItemGrid.GetItem(itemToDetailPos.x, itemToDetailPos.y);

        if (detailedItem == null) {
            if(detailInventoryWindow.activeInHierarchy){
                detailInventoryWindow.SetActive(false);
                selectedItem = null;
            }
            return;
        }

        if(pickupItem != null){
            return;
        }

        selectedItem = detailedItem;

        DetailToggle();
    }

    private void DetailToggle()
    {
        RectTransform rectTransform = detailInventoryWindow.GetComponent<RectTransform>();

        if (detailInventoryWindow.activeInHierarchy)
        {
            detailInventoryWindow.SetActive(false);
            selectedItem = null;
        }
        else
        {
            detailInventoryWindow.SetActive(true);
            
            //디테일 인벤토리 아이탬 이미지 교체
            Image itemImage = detailInventoryWindow.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<Image>();
            itemImage.sprite = selectedItem.itemData.itemIcon;

            //디테일 인벤토리 위치조정
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

            //Close버튼을 통해 단일 grid가 껴져있을수 있으므로 다시 킵니다.
            for(int i = 0; i < itemGrids.Length; i++){
                if(!itemGrids[i].gameObject.activeInHierarchy){
                    itemGrids[i].transform.parent.gameObject.SetActive(true);
                }
            }
        }
    }

    private void LeftMouseButtonPress()
    {
        if(detailInventoryWindow.activeInHierarchy){
            detailInventoryWindow.SetActive(false);
            selectedItem = null;
        }
        Vector2Int tileGridPosition = GetTileGridPosition();
        //Debug.Log("tileGridPositin : "+ tileGridPosition.x + ":" + tileGridPosition.y);
        if (pickupItem == null)
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
        if (pickupItem != null)
        {
            position.x -= (pickupItem.WIDTH - 1) * ItemGrid.tileSizeWidth / 2;
            position.y += (pickupItem.HEIGHT - 1) * ItemGrid.tileSizeHeight / 2;
        }
       
        return selectedItemGrid.GetTileGridPosition(position);
    }
    
    #region LeftMouseButtonPress 관련
    private void PlaceItem(Vector2Int tileGridPosition)
    {
        
        bool complete = selectedItemGrid.PlaceItem(pickupItem, tileGridPosition.x, tileGridPosition.y, selectedItemGrid, ref overlapItem);

        if(complete){
            pickupItem = null;
            selectedItem = null;

            if(overlapItem != null){
                pickupItem = overlapItem;
                overlapItem = null;

                selectedItem = pickupItem;
                rectTransform = pickupItem.GetComponent<RectTransform>();
                
            }
        }
    }

    private void PickUpItem(Vector2Int tileGridPosition)
    {
        pickupItem = selectedItemGrid.PickUpItem(tileGridPosition.x, tileGridPosition.y);
        if (pickupItem != null)
        {
            selectedItem = pickupItem;
            rectTransform = pickupItem.GetComponent<RectTransform>();
        }
    }

    private void PickUpItem(InventoryItem item)
    {
        pickupItem = item;
        rectTransform = pickupItem.GetComponent<RectTransform>();
    }
    #endregion

    #region 디테일 버튼 관리
    public void OnPickUpButton()
    {
        PickUpItem(selectedItem);
        DetailToggle();
    }

    

    public void OnUseButton(){
        UseItem();
        DetailToggle();
    }

    public void OnDivideButton(){
        DivideItem();
        DetailToggle();
    }

    public void OnThrowButton(){
        DropItem(selectedItem);
        DetailToggle();
    }
    #endregion

    #region 아이탬사용
    private void UseItem()
    {
        Debug.Log("Use");
    }

    private void DivideItem(){
        Debug.Log("Divide");
    }

    private void DropItem(InventoryItem item)
    {
        Instantiate(item.itemData.dropPrefab, dropPosition.position, quaternion.identity);
        Destroy(item.gameObject);

        selectedItem = null;
    }
    #endregion
    
    #region 캔버스 컨트롤
     public void CheckClose(){
        int toggleCount = 0;
        
        for(int i = 0; i < itemGrids.Length; i++){
            if(!itemGrids[i].gameObject.activeInHierarchy){
                toggleCount ++;
            }
        }
   
        if(toggleCount == itemGrids.Length){
            Toggle();
        }
    }
    
    #endregion
}
