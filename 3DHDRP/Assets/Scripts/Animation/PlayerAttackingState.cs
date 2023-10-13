using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttackingState : PlayerBaseState
{
    float previousFrameTime;
    bool alreadyApplyForce;
    Attack attack;

    public PlayerAttackingState(PlayerStateMachine stateMachine, int attackIndex) : base(stateMachine){
        attack = stateMachine.Attacks[attackIndex];
    }

    public override void Enter()
    {
        stateMachine.Animator.CrossFadeInFixedTime(attack.AnimationName, attack.TransitionDuration);
    }


    public override void Tick(float deltaTime)
    {
        Move(deltaTime);

        FaceTarget();

        float normalizedTime = GetNormalizedTime();

        if(normalizedTime >= previousFrameTime && normalizedTime < 1f){
            if(normalizedTime >= attack.ForceTime){
                TryApplyForce();
            }
            if(stateMachine.InputReader.IsAttacking){
                TryComboAttack(normalizedTime);
            }
        }
        else{
            if(stateMachine.Targeter.CurrenTarget != null){
                stateMachine.SwitchState(new PlayerTargetingState(stateMachine));
            }
            else{
                stateMachine.SwitchState(new PlayerFreeLookState(stateMachine));
            }
        }

        previousFrameTime = normalizedTime;
    }

    

    public override void Exit()
    {

    }

    private float GetNormalizedTime(){
        AnimatorStateInfo currentInfo = stateMachine.Animator.GetCurrentAnimatorStateInfo(0);
        AnimatorStateInfo nextInfo = stateMachine.Animator.GetNextAnimatorStateInfo(0);
        
        //이 메서드는 현재 애니메이션 상태에서 다른 상태로의 전환 중인지 여부를 확인
        if(stateMachine.Animator.IsInTransition(0) && nextInfo.IsTag("Attack")){
            return nextInfo.normalizedTime;
        }
        else if(!stateMachine.Animator.IsInTransition(0) && currentInfo.IsTag("Attack")){
            return currentInfo.normalizedTime;
        }
        else{
            
            return 0;
        }
    }

    private void TryComboAttack(float normalizedTime){
        if(attack.ComboStateIndex == -1) { return; }
        if(normalizedTime < attack.ComboAttackTime){ return; }

        stateMachine.SwitchState(
            new PlayerAttackingState( stateMachine, attack.ComboStateIndex)
        );
    }
    private void TryApplyForce(){
        if(alreadyApplyForce){ return; }

        stateMachine.ForceReceiver.AddForce(stateMachine.transform.forward * attack.Force);

        alreadyApplyForce = true;
    }
}