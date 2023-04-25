using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class _2_DeltaType : MonoBehaviour
{
    public float speed = 1.0f;
    Vector3 target = new Vector3(8, 1.5f,0);


    // Update is called once per frame
    void Update()
    {
        /*
        //1.MoveToward  :  타켓을 향해 이동,(쫒아갈놈,목표,속도)
        transform.position = Vector3.MoveToward(transform.position, target, speed);
     
        //2.SmoothDamp  :   부드러운 감속 이동(현재위치, 목표위치, 참조속도, 속도) 마지막 속도에 반비례하여 속도증가
        //속도로 출발해서 이동하다가 일정 목표지점에오면 참조값속도로 서서히바꾸면서 목표점에 도달한다. ex)up*50이런식으로하면 목표위 50지점으로가버림
        Vector3 velo = Vector3.zero;
        transform.position = Vector3.SmoothDamp(transform.position, target, ref velo, 1.0f);    
    
        //3.Lerp 선형보간, SmoothDamp보다 감속시간이 김 (현재위치,목표위치, 속도(0~1값))
        transform.position = Vector3.Lerp(transform.position,target,1f);

        //4,SLerp 구면 선형 보간, 호를그리며 이동(현재위치,목표위치, 속도(0~1값))
        transform.position = Vector3.Slerp(transform.position,target,1f);
          5.AddForce(vector3.up *5. ForceMode.Impulse)
          ForceMode.Impulse는 보통 점프할떄 쓴다. 무게에 영향을 받는다.
          
          6.rigid.AddTorque = 회전력
            rigit.AddTorque(vector3.......)
        */
    }
}
