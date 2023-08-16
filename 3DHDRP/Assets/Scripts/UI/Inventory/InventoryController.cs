using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InventoryController : MonoBehaviour
{
    [HideInInspector]
    public ItemGrid selectedItemGrid;

    void Update(){
        
    }

    public void OnClickInventoyInput(InputAction.CallbackContext context){
        if(selectedItemGrid == null){ return;}

        if(context.phase == InputActionPhase.Started){
            Debug.Log(selectedItemGrid.GetTileGridPosition(Input.mousePosition));
        }
    }
}
