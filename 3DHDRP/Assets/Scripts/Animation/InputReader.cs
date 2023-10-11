using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputReader : MonoBehaviour, Controller.IPlayerActions
{
    public event Action JumpEvent;
    public event Action DodgeEvent;
    public event Action TargetEvent;
    public event Action CancerEvent;
    public Vector2 MovementValue{get; private set;}
    public bool FastRun{get; private set;}



    Controller controller;


    private void Start() {
        controller = new Controller();
        //inputsystem에서 세팅한 Player의 Action값들의 콜백을 연결
        controller.Player.SetCallbacks(this);

        controller.Player.Enable();
    }
    
    private void OnDestroy() {
        controller.Player.Disable();
    }

    public void OnJump(InputAction.CallbackContext context)
    {
        if(!context.performed) { return; }

        JumpEvent?.Invoke();
    }

    public void OnDodge(InputAction.CallbackContext context)
    {
        if(!context.performed) { return; }

        DodgeEvent?.Invoke();
    }

    public void OnMove(InputAction.CallbackContext context)
    {
        MovementValue = context.ReadValue<Vector2>();
    }

    public void OnLook(InputAction.CallbackContext context)
    {
        
    }

    public void OnFastRun(InputAction.CallbackContext context)
    {
        FastRun = context.performed ? true : false;
    }

    public void OnTarget(InputAction.CallbackContext context)
    {
        if(!context.performed){ return; }
        TargetEvent?.Invoke();
    }

    public void OnCancer(InputAction.CallbackContext context)
    {
        if(!context.performed){ return; }
        CancerEvent?.Invoke();
    }
}
