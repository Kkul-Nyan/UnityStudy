using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
     PlayerStatus playerStatus;

     public float decoyStamina;

     public float playerSpeed;
     public float jumpPower;
     public LayerMask groundLayerMask;
     Rigidbody rig;
     Vector2 inputVec;

     public Transform player;
     public Transform cameraContainer;
     public float minXLook;
     public float maxXLook;
     float camCurXRot;
     public float lookSensitivity;

     bool canLook = true;
     public bool CanLook{
          get{return canLook;}
     }


     Vector2 mouseDelta;

     Animator anim;

     bool isMovementAllowed = true;
     float immobilizeEndTime = 0f;
     public float immobilizeDuration = 3f;

     public Camera cam;
     public bool isGround;
     bool battleMode;
     public bool BattleMode{
          get{return battleMode;}
          set{battleMode = value;}
     }
       

     #region 유니티 기본전처리 과정
     private void Awake(){
          rig = GetComponent<Rigidbody>();
          anim = GetComponentInChildren<Animator>();
          playerStatus = GetComponent<PlayerStatus>();
          cam = Camera.main;
     }

     private void Start(){
          Cursor.lockState = CursorLockMode.Locked;
     }

          private void FixedUpdate()
     {
          if (isMovementAllowed)
          {
               PlayerMove();
          }
          else
          {
               if (Time.time >= immobilizeEndTime)
               {
                    anim.SetBool("Tired", false);
                    isMovementAllowed = true;
               }
          }
     }


     private void LateUpdate(){
          if(canLook == true){
               CameraLook();
          }
     }
     #endregion

     #region 플레이어 기본적인 움직임(앞뒤좌우)
     public void OnMoveInput(InputAction.CallbackContext callback){
          if(isMovementAllowed){
               if(callback.phase == InputActionPhase.Performed){  
                    anim.SetBool("Run", true);
                    inputVec = callback.ReadValue<Vector2>();
               }
               else{
                    anim.SetBool("Run", false);
                    inputVec = Vector2.zero;
               }
          }
          
     }

     void PlayerMove()
     {
          if (inputVec != Vector2.zero)
          {
               playerStatus.Work(decoyStamina * Time.deltaTime);
               if (playerStatus.stamina.curValue <= 0f)
               {
                    isMovementAllowed = false;
                    immobilizeEndTime = Time.time + immobilizeDuration;
                    anim.SetBool("Tired", true);
                    anim.SetBool("Run", false);
                    inputVec = Vector2.zero;
                    return; // 스태미너가 부족하면 이동하지 않습니다.
               }
          }
          
          Vector3 moveVec = transform.forward * inputVec.y + transform.right * inputVec.x;
          moveVec *= playerSpeed;
          moveVec.y = rig.velocity.y;
          rig.velocity = moveVec;
     }
     #endregion

     #region 플레이어 점프 관련
     public void OnJumpInput(InputAction.CallbackContext callback){
          if(callback.phase == InputActionPhase.Started){
               if(isGround)
               {
               anim.SetBool("StandJump", true);
               Invoke("DoJump", 0.2f); 
               }
          }
     }

     private void DoJump()
     {
          
          rig.AddForce(Vector3.up * jumpPower, ForceMode.Impulse);
          isGround = false;
     }

     public void OnBattleModeInput(InputAction.CallbackContext context){
          if(context.phase == InputActionPhase.Started){
               ToggleBattleMode();
          }
     }

     public void ToggleBattleMode(){
          if(battleMode == true){
               anim.SetLayerWeight(1,0);
               battleMode = false;
          }
          else{
               anim.SetLayerWeight(1,1);
               battleMode = true;
          }
     }
     /*
     void CheckGround(){
          if(IsGrounded()){
               anim.SetBool("StandJump", false);
               Debug.Log("Ground!");
          }
     }
     bool IsGrounded () {
          Ray[] rays = new Ray[4]{
               new Ray(transform.position + (transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f),
               new Ray(transform.position + (-transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f),
               new Ray(transform.position + (transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f),
               new Ray(transform.position + (-transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f)
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

          Gizmos.DrawRay(transform.position + (transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f);
          Gizmos.DrawRay(transform.position + (-transform.forward * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f);
          Gizmos.DrawRay(transform.position + (transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f);
          Gizmos.DrawRay(transform.position + (-transform.right * 0.2f) + (Vector3.up * 0.01f), Vector3.down * 0.1f);
     }*/

     private void OnCollisionEnter(Collision other) {
          if(other.gameObject.CompareTag("Ground")){
               isGround = true;
               anim.SetBool("StandJump", false);
          }
     }

     #endregion

     #region 플레이어 좌클릭 공격
     
     
     
     #endregion

     #region 플레이어 시점 관련
     public void OnLookInput(InputAction.CallbackContext context){
          mouseDelta = context.ReadValue<Vector2>();
     }

     void CameraLook(){
     camCurXRot += mouseDelta.y * lookSensitivity;
     camCurXRot = Mathf.Clamp(camCurXRot, minXLook, maxXLook);
     cameraContainer.localEulerAngles = new Vector3 (-camCurXRot, 0, 0);

     transform.eulerAngles += new Vector3(0, mouseDelta.x * lookSensitivity, 0);
     }

     public void ToggleCursor(bool toggle){
          Cursor.lockState = toggle ? CursorLockMode.None : CursorLockMode.Locked;
          canLook = !toggle;
     }
     #endregion
}
