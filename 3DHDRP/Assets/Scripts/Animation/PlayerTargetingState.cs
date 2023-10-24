using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTargetingState : PlayerBaseState
{
    private readonly int TargetingBlendTree = Animator.StringToHash("TargetingBlendTree");
    private readonly int TargetingForwardTree = Animator.StringToHash("TargetingForward");
    private readonly int TargetingRightTree = Animator.StringToHash("TargetingRight");
    private const float CrossFadeDuration = 0.1f;

    public PlayerTargetingState(PlayerStateMachine stateMachine) : base(stateMachine){}

    public override void Enter()
    {
        stateMachine.InputReader.CancerEvent += OnCancel;

        stateMachine.Animator.CrossFadeInFixedTime(TargetingBlendTree, CrossFadeDuration);
    }
    public override void Tick(float deltaTime)
    {
        if(stateMachine.InputReader.IsAttacking){
            stateMachine.SwitchState(new PlayerAttackingState(stateMachine, 0));
            return;
        }

        if(stateMachine.Targeter.CurrenTarget == null){
            stateMachine.SwitchState(new PlayerFreeLookState(stateMachine));
            return;
        }

        Vector3 movement = CalculateMovement();
        
        Move(movement * stateMachine.TargetingMovementSpeed, deltaTime);

        UpdateAnimator(deltaTime);

        FaceTarget();
    }


    public override void Exit()
    {
        stateMachine.InputReader.CancerEvent -= OnCancel;

    }

    private void OnCancel()
    {
        stateMachine.Targeter.Cancel();
        stateMachine.SwitchState(new PlayerFreeLookState(stateMachine));
    }

    Vector3 CalculateMovement(){
        Vector3 movement = new Vector3();

        movement += stateMachine.transform.right * stateMachine.InputReader.MovementValue.x;
        movement += stateMachine.transform.forward * stateMachine.InputReader.MovementValue.y;

        return movement;
    }
    private void UpdateAnimator(float deltaTime)
    {
        if(stateMachine.InputReader.MovementValue.y == 0){
            stateMachine.Animator.SetFloat(TargetingForwardTree, 0, 0.1f, deltaTime);
        }
        else{
            float value = stateMachine.InputReader.MovementValue.y > 0 ? 1f : -1f;
            stateMachine.Animator.SetFloat(TargetingForwardTree, value, 0.1f, deltaTime);
        }

        if(stateMachine.InputReader.MovementValue.x == 0){
            stateMachine.Animator.SetFloat(TargetingRightTree, 0, 0.1f, deltaTime);
        }
        else{
            float value = stateMachine.InputReader.MovementValue.x > 0 ? 1f : -1f;
            stateMachine.Animator.SetFloat(TargetingRightTree, value, 0.1f, deltaTime);
        }
        
    }
}

