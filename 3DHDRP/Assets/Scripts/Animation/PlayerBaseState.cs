using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;

public abstract class PlayerBaseState : State
{
    protected PlayerStateMachine stateMachine;

    //생성자
    public PlayerBaseState(PlayerStateMachine stateMachine){
        this.stateMachine = stateMachine; 
    }

    protected void Move(Vector3 motion, float deltaTime){
        stateMachine.CharacterController.Move((motion + stateMachine.ForceReceiver.Movement) * Time.deltaTime );
    }
    protected void Move(float deltaTime){
        Move(Vector3.zero, deltaTime);
    }

    protected void FaceTarget(){
        if(stateMachine.Targeter.CurrenTarget == null) { return; }

        Vector3 lookPos = stateMachine.Targeter.CurrenTarget.transform.position - stateMachine.transform.position;
        lookPos.y = 0f;

        stateMachine.transform.rotation = Quaternion.LookRotation(lookPos);
    }
}
