using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Targeter : MonoBehaviour
{
    public List<Target> targets = new List<Target>();

    private void OnTriggerEnter(Collider other) {
        /*
        Target target = other.GetComponent<Target>();
        if(target == null){ return; }을 if(!other.TryGetComponent<Target>(out Target target))로 간략하게할수있다.
        */
        if(!other.TryGetComponent<Target>(out Target target)){ return; }
        
        targets.Add(target);
    }

    private void OnTriggerExit(Collider other) {
        if(!other.TryGetComponent<Target>(out Target target)){ return; }
        
        targets.Remove(target);
    }
}
