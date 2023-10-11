using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

public class Targeter : MonoBehaviour
{
    [SerializeField] private CinemachineTargetGroup cinemachineTargetGroup;
    public List<Target> targets = new List<Target>();
    public Target CurrenTarget {get; private set;}

    private void OnTriggerEnter(Collider other) {
        /*
        Target target = other.GetComponent<Target>();
        if(target == null){ return; }을 if(!other.TryGetComponent<Target>(out Target target))로 간략하게할수있다.
        */
        if(!other.TryGetComponent<Target>(out Target target)){ return; }
        
        targets.Add(target);
        target.OnDestroyed += RemoveTarget;
    }


    private void OnTriggerExit(Collider other) {
        if(!other.TryGetComponent<Target>(out Target target)){ return; }
        
        RemoveTarget(target);
    }

    public bool SelectTarget(){
        if(targets.Count == 0){ return false; }

        CurrenTarget = targets[0];
        cinemachineTargetGroup.AddMember(CurrenTarget.transform, 1f, 2f);
        return true;
    }

    public void Cancel(){
        if(CurrenTarget == null ) { return; }
        cinemachineTargetGroup.RemoveMember(CurrenTarget.transform);
        CurrenTarget = null;
    }
    private void RemoveTarget(Target target)
    {
        if(CurrenTarget == target){
            cinemachineTargetGroup.RemoveMember(CurrenTarget.transform);
            CurrenTarget = null;
        }
        target.OnDestroyed -= RemoveTarget;
        targets.Remove(target);
    }
}
