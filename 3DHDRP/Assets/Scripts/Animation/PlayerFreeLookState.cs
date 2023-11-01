using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class PlayerFreeLookState : PlayerBaseState
{
    //단순히 String으로 처리하는것보다 Hash를 통해 int를 사용하는것이 조금더 빠름
    private readonly int FreeLookBlendTreeHash = Animator.StringToHash("FreeLookBlendTree");
    private readonly int FreeLookSpeedHash = Animator.StringToHash("FreeLookSpeed");
    private const float AnimatorDampTime = 0.1f;
    private const float CrossFadeDuration = 0.1f;
    public PlayerFreeLookState(PlayerStateMachine stateMachine) : base(stateMachine) {}

    public override void Enter()
    {
        //타켓이벤트 구독
        stateMachine.InputReader.TargetEvent += OnTarget;

        stateMachine.Animator.CrossFadeInFixedTime(FreeLookBlendTreeHash, CrossFadeDuration);
    }

    public override void Tick(float deltaTime)
    {
        if(stateMachine.InputReader.IsAttacking){
            stateMachine.SwitchState(new PlayerAttackingState(stateMachine, 0));
            return;
        }
        
        Vector3 movement = CalculateMovement();

        
        if (stateMachine.InputReader.FastRun)
        {
            Move(movement * stateMachine.FreeLookMovementSpeed * 2f, deltaTime);
        }
        else
        {
            Move(movement * stateMachine.FreeLookMovementSpeed, deltaTime);
        }

        if (stateMachine.InputReader.MovementValue == Vector2.zero)
        {
            stateMachine.Animator.SetFloat(FreeLookSpeedHash, 0, AnimatorDampTime, deltaTime);
            return;
        }

        stateMachine.Animator.SetFloat(FreeLookSpeedHash, 1, AnimatorDampTime, deltaTime);
        FaceMovementDirection(movement, deltaTime);
    }


    public override void Exit()
    {
        stateMachine.InputReader.TargetEvent -= OnTarget;
    }

    private void OnTarget(){
        if(!stateMachine.Targeter.SelectTarget()) { return; }
        stateMachine.SwitchState(new PlayerTargetingState(stateMachine));
    }

    private Vector3 CalculateMovement(){
       Vector3 forward = stateMachine.MainCameraTransform.forward;
       Vector3 right = stateMachine.MainCameraTransform.right;

       forward.y = 0f;
       right.y = 0f;

       forward.Normalize();
       right.Normalize();

       return forward * stateMachine.InputReader.MovementValue.y + right * stateMachine.InputReader.MovementValue.x;
    }

    //입력값에 맞게 캐릭터도 회전하게 함
    private void FaceMovementDirection(Vector3 movement, float deltaTime)
    {
        stateMachine.transform.rotation = Quaternion.Lerp(
            stateMachine.transform.rotation,
            Quaternion.LookRotation(movement),
            deltaTime * stateMachine.RotationDamping
        );
    }
}
