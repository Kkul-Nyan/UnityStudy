using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStatus : MonoBehaviour, IDamagable
{
    public Status level;
    public Status xp;
    public Status health;
    public Status stamina;
    public Status mana;
    public Status hunger;
    public Status thirst;
    public Status sleep;

    public float noHungerHealthDecay;
    public float noThirstHealthDecay;

    public bool isBattle = false;
    public float notBattleTime = 60;

    public bool isHunger = false;
    public float keepStaminaMax;

    

    void Start(){
        level.curValue = level.startValue;
        health.curValue = health.startValue;
        stamina.curValue = stamina.startValue;
        mana.curValue = mana.startValue;
        hunger.curValue = hunger.startValue;
        thirst.curValue = thirst.startValue;
        sleep.curValue = sleep.startValue;
        keepStaminaMax = stamina.maxValue;
        xp.curValue = xp.startValue;
    }

    void Update(){
        StatusUpdate();
        HungrySound();
    }

    void StatusUpdate(){
        CheckPlayerDead();

        stamina.maxValue = Mathf.Max(hunger.curValue, keepStaminaMax * 0.3f);

        if(isBattle == false){
            stamina.Add(stamina.regenRate * Time.deltaTime);
            mana.Add(thirst.regenRate * Time.deltaTime);
        }
        
        hunger.Subtract(hunger.decayRate * Time.deltaTime);
        thirst.Subtract(thirst.decayRate * Time.deltaTime);
        sleep.Add(sleep.regenRate * Time.deltaTime);

        if(hunger.curValue == 0.0f){
            health.Subtract(noHungerHealthDecay * Time.deltaTime);
        }
        if(thirst.curValue == 0.0f){
            health.Subtract(noThirstHealthDecay * Time.deltaTime);
        }
        
        health.uiBar.fillAmount = health.GetPercentage();
        stamina.uiBar.fillAmount = stamina.GetPercentage();
        mana.uiBar.fillAmount = mana.GetPercentage();
        hunger.uiBar.fillAmount = hunger.GetPercentage();
        thirst.uiBar.fillAmount = thirst.GetPercentage();
        //sleep.uiBar.fillAmount = sleep.GetPercentage();
        //xp.uiBar.fillAmount = xp.GetPercentage();
    }

    void HungrySound(){
        if( hunger.curValue < 40){
            if(!isHunger){
                //오디오 실행
                isHunger = true;
            }
        }
        else{
            isHunger = false;
        }
        

    }
    void CheckPlayerDead(){
        if(health.curValue == 0.0f){
            Die();
        }
    }

    public void Heal(float amount){
        health.Add(amount);
    }
    public void Work(float amount){
        stamina.Subtract(amount);
    }
    public void Magic(float amount){
        mana.Subtract(amount);
    }

    public void rest(float amount){
        stamina.Add(amount);
    }

    public void restMana(float amount){
        mana.Add(amount);
    }
    public void Eat(float amount){
        hunger.Add(amount);
    }
    public void Drink(float amount){
        thirst.Add(amount);
    }
    public void Sleep(float amount){
        sleep.Subtract(amount);
    }
    public void GetXP(float amount){
        xp.curValue = xp.curValue + amount;
        if( xp.curValue > xp.maxValue){
            xp.curValue = xp.curValue - xp.maxValue;
            xp.maxValue += Mathf.Round(xp.maxValue * 0.5f);
            LevelUp();
        }
    
    }

    private void LevelUp()
    {
        level.Add(1);
    }

    public void TakePhysicalDamage(int amount){
        health.Subtract(amount);
        notBattleTime = 60;
        isBattle = true;
    }

    public void CheckBattle(){
        if(notBattleTime > 0){
            notBattleTime -= Time.deltaTime;
        }
        else{
            isBattle = false;
        }
    }

    public void Die(){
        Debug.Log("Player is Dead");
    }
}

[System.Serializable]
public class Status
{
    public float maxValue;
    public float curValue;
    public float startValue;
    public float regenRate;
    public float decayRate;
    public Image uiBar;

    public void Add(float amount){
        curValue = Mathf.Min(curValue + amount, maxValue);
    }
    public void Subtract (float amount) {
        curValue = Mathf.Max(curValue - amount, 0.0f);
    }
    public float GetPercentage (){
        return curValue / maxValue;
    }
    
}