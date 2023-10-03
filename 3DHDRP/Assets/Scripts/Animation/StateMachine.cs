using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class StateMachine : MonoBehaviour
{
    private State currentState;


    private void Update() { 
        //null-conditional 연산자로 작동여부 체크
        currentState?.Tick(Time.deltaTime);
    }

    public void SwitchState(State newState){
        currentState?.Exit();
        currentState = newState;
        currentState?.Enter();
    }
    
}
