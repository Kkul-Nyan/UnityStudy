using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class PlayerController : MonoBehaviour
{
    public float moveSpeed = 3;
    public float jumpPower = 3;
    Vector2 moveInput;
    Rigidbody rig;
    
    private void Awake() {
        rig = GetComponent<Rigidbody>();
    }

    private void FixedUpdate() {
        Move();
    }
    
    void Move(){
        Vector3 dir = transform.forward * moveInput.y + transform.right * moveInput.x;
        dir *= moveSpeed;
        dir.y = rig.velocity.y;
        rig.velocity = dir;
    }

    public void OnMoveInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed){
            moveInput = context.ReadValue<Vector2>();
        }
        else{
            moveInput = Vector2.zero;
        }
    }
    public void OnJumpInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed){
            rig.AddForce(Vector3.up * jumpPower, ForceMode.Impulse);
        }
        else{

        }
    }
}
