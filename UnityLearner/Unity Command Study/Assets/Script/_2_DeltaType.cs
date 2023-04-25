using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class _2_DeldaType : MonoBehaviour
{
    /*Time.deltaTime 사용하는 방법
    Translate = 벡터에 곱하기 -> transform.Translate(Vector3 * Time.deltaTime);
    Vector 함수 = 시간 매개변수에 곱하기 ->transform.position = Vec1,Vec2,T * Time.deltaTime);
    */


    // Update is called once per frame
    void Update()
    {
        //Vector3 vec = new Vector3(Input.GetAxisRaw("Horizontal") * Time.deltaTime, 
       //                           Input.GetAxisRaw("Vertical") * Time.deltaTime  )
        //transform.Translate(vec);   
        
        //컴퓨터사양에 따라 업데이트가 속도가 밀리게 되면 이동 속도도 달라지니, 누구는 빠르고 누구는 느려질수있음.
        //이를 막기 위해 델타타임 사용 
        //점프키에 델타타임 계산을 곱해버리면 델타타임에 맞출려고 점프력이 다달라지는등 버그버팀 넣지말것
    }
}
