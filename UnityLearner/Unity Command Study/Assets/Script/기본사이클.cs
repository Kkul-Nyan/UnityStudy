using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//초기화 -> 물리 ->게임로직 -> 해체
//  초기화와 물리사이 활성화일떄 OnEnable
//  게임로직과 해체 사이 오브젝트 비활성화가존재 OnDisable
 public class 기본싸이클 : MonoBehaviour
{
   /* void Awake()
    {
        Debug.Log("플레이어 데이타가 준비되었습니다");
    }
    // Start is called before the first frame update
    void OnEnable() {
        //게임 오브젝트가 활성화 되었을떄,
        Debug.Log(" 플레이어로그인");
    }
    void Start()
    {
        Debug.Log("즐거운 사냥 준비가 완료되었습니다!");
    }

     void FixedUpdate() {
        //물리연산전에 작동
        //물리연산업데이트 고정된실행주기로 cpu를 많이 사용한다.
        //물리연산과 관련된 로직을 많이 쓴다.
        Debug.Log("이동~");
    }

    // Update is called once per frame
    void Update()
    {
        //게임로직엡데이트 환경에 따라 실행주기가 떨어진다
         Debug.Log("몬스터사냥");
    }

     void LateUpdate() 
    {
        //모든업데이트 끝난 후, 보통 캐릭터 쫒아가는 카메라등 후처리
        Debug.Log("경험치획득");
    }

    void OnDisable()
    {
        Debug.Log("플레이어가 로그아웃했습니다.");
    }

    void OnDestroy() 
    {
        //해체영역
        //오브젝트가 삭제될때, 무언가 남기고 사라질때사용 
        Debug.Log("플레이어데이터를 해제하였습니다");

    }

    */
}
