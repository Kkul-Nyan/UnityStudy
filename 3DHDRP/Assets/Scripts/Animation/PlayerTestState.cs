using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class PlayerTestState : PlayerBaseState
{
    float timer;

    public PlayerTestState(PlayerStateMachine stateMachine) : base(stateMachine) {}

    public override void Enter()
    {
        stateMachine.InputReader.JumpEvent += OnJump;
    }
    public override void Tick(float deltaTime)
    {
        timer += deltaTime;
        Debug.Log(timer);

    }
    public override void Exit()
    {
        stateMachine.InputReader.JumpEvent -= OnJump;
    }

    void OnJump(){
        stateMachine.SwitchState(new PlayerTestState(stateMachine));
    }

}
