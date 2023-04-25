using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Cactus : MonoBehaviour
{
    public int damage;
    public int maxDamage;
    public int minDamage;
    public float damageRate;
    
    public TextMeshProUGUI critical;
    public delegate void criticalmessage (int damage);

    List<IDamagable> thingsToDamage = new List<IDamagable>();
    public void normal(int damage) => critical.text = damage.ToString();
    public void max(int damage) {
        critical.text = damage.ToString();
        critical.fontSize = 150;
        critical.fontStyle = FontStyles.Bold;
        
    }
    private void Start() {
        StartCoroutine(DealDamage());
    }
    IEnumerator DealDamage () {
        while(true){
            for(int i = 0; i < thingsToDamage.Count; i++){
                damage = Random.Range(minDamage, maxDamage);
                criticalmessage message;
                
                if(damage == maxDamage-1){
                    message = max;
                    message(damage);
                }
                else{
                    message = normal;
                    message(damage);
                }
                thingsToDamage[i].TakePhysicalDamage(damage);      
            }
            yield return new WaitForSeconds(damageRate);
        }
    }

    private void OnCollisionEnter(Collision other) {
        if(other.gameObject.GetComponent<IDamagable>() != null){
            thingsToDamage.Add(other.gameObject.GetComponent<IDamagable>());
        }
    }
    private void OnCollisionExit(Collision other) {
        if(other.gameObject.GetComponent<IDamagable>() != null){
            thingsToDamage.Remove(other.gameObject.GetComponent<IDamagable>());
        }
    }
}
