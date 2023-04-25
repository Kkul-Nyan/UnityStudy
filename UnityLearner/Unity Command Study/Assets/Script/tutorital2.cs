using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tutorital2 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    
    private float timer = 0.0f;
    void FixedUpdate() 
    {
        
        timer += 0.1f;
        if(timer >1 )
        {
            Debug.Log($"{timer}초 입니다");
            timer = 0.0f;
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(Input.anyKeyDown)
        {
        Debug.Log("플레이어가 아무키를 눌렸습니다.");
        }
        if(Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("플레이어가 대화창을 열었습니다.");
        }   
        if(Input.GetButton("Horizontal"))
        {
            Debug.Log("플레이어가 GetAxis방식으로 좌우로 움직입니다"+ Input.GetAxis("Horizontal"));
            Debug.Log("플레이어가 AxisRaw방식으로 좌우로 움직입니다"+Input.GetAxisRaw("Horizontal"));
        }
        if(Input.GetButtonDown("Vertical"))
        {   
            Debug.Log("플레이어가 위아래로 움직입니다");
        }   
        
        if(Input.GetButtonDown("Fire1"))
            Debug.Log("일반공격!");

    
        if(Input.GetButton("Jump"))
            Debug.Log("강공격준비중");

        if(Input.GetButtonUp("Jump"))
            Debug.Log("강공격!!");
    
    

    }
    
}
