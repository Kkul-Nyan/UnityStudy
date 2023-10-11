using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

public class Targeter : MonoBehaviour
{
    [SerializeField] private CinemachineTargetGroup cinemachineTargetGroup;
    public List<Target> targets = new List<Target>();
    private Camera mainCamera;
    public Target CurrenTarget {get; private set;}

    private void Start() {
        mainCamera = Camera.main;
    }
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

        Target closestTarget = null;
        float closestTargetDistance = Mathf.Infinity;

        foreach(Target target in targets){
            //타겟의 위치를 화면 뷰포트 좌표로 변환
            Vector2 viewPos = mainCamera.WorldToViewportPoint(target.transform.position);
            //만약 타겟이 화면 뷰포트 바깥에 있다면 (viewPos의 x나 y가 0보다 작거나 1보다 큰 경우), 반복문을 다음 타겟으로 건너뜁니다
            if(viewPos.x < 0 || viewPos.x > 1 || viewPos.y < 0 || viewPos.y > 1){
                continue;
            }
            //현재 타겟과 화면 중심 간의 상대적 거리
            Vector2 toCenter = viewPos - new Vector2(0.5f, 0.5f);
            if(toCenter.sqrMagnitude < closestTargetDistance){
                closestTarget = target;
                closestTargetDistance = toCenter.sqrMagnitude;
            }
        }

        if(closestTarget == null) { return false; }

        CurrenTarget = closestTarget;
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
