using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using Sirenix.OdinInspector;

public class PlayerController06 : MonoBehaviour
{
    [BoxGroup("Movement")]public float moveSpeed;
    [BoxGroup("Movement")]private Vector2 curMovementInput;
    [BoxGroup("Movement")]private Rigidbody rig;
    [BoxGroup("Movement")]public float jumpForce;
    [BoxGroup("Movement")]public LayerMask groundLayerMask;

    
    [BoxGroup("Look")][GUIColor(0.3f, 0.8f, 0.8f, 1)]public Transform cameraContainer;
    [BoxGroup("Look")]public float minXLook;
    [BoxGroup("Look")]public float maxXLook;
    [BoxGroup("Look")]private float camCurXRot;
    [BoxGroup("Look")]public float lookSensitivity;

    [HideInInspector]
    public bool canLook = true;
    private Vector2 mouseDelta;

    //singleton
    public static PlayerController06 instance;

    private void Awake() {
        rig = GetComponent<Rigidbody>();
        instance = this;
    }
    private void Start() {
        Cursor.lockState = CursorLockMode.Locked;
    }
    private void FixedUpdate() {
        Move();
    }
    private void LateUpdate() {
        if(canLook == true){
            CameraLook();    
        }
    }
    void CameraLook(){
        camCurXRot += mouseDelta.y * lookSensitivity;
        camCurXRot = Mathf.Clamp(camCurXRot, minXLook, maxXLook);
        cameraContainer.localEulerAngles = new Vector3 (-camCurXRot, 0, 0);

        transform.eulerAngles += new Vector3(0, mouseDelta.x * lookSensitivity, 0);
    }

    void Move(){
        Vector3 dir = transform.forward * curMovementInput.y + transform.right * curMovementInput.x;
        dir *= moveSpeed;
        dir.y = rig.velocity.y;
        rig.velocity = dir;
    }

    public void OnLookInput (InputAction.CallbackContext context){
        mouseDelta = context.ReadValue<Vector2>();
    }

    public void OnMoveInput(InputAction.CallbackContext context){
        if(context.phase == InputActionPhase.Performed) {
            curMovementInput = context.ReadValue<Vector2>();
        }
        else if(context.phase == InputActionPhase.Canceled){
            curMovementInput = Vector2.zero;
        }
    }

    public void OnJumpInput (InputAction.CallbackContext context) {
        if(context.phase == InputActionPhase.Started){
            if(IsGrounded()){
                rig.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            }
        }
    }
    bool IsGrounded () {
        Ray[] rays = new Ray[4]{
            new Ray(transform.position + (transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down),
            new Ray(transform.position + (-transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down),
            new Ray(transform.position + (transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down),
            new Ray(transform.position + (-transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down)
        };

        for(int i = 0; i <rays.Length; i ++) {
            if(Physics.Raycast(rays[i], 0.1f, groundLayerMask)){
                return true;
            }
        }
        return false;
    }

    void OnDrawGizmos() {
        Gizmos.color = Color.red;

        Gizmos.DrawRay(transform.position + (transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down);
        Gizmos.DrawRay(transform.position + (-transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down);
        Gizmos.DrawRay(transform.position + (transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down);
        Gizmos.DrawRay(transform.position + (-transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down);
    }

    public void ToggleCursor(bool toggle){
        Cursor.lockState = toggle ? CursorLockMode.None : CursorLockMode.Locked;
        canLook = !toggle;
    }
}
