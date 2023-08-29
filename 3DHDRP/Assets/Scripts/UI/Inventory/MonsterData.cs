using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

[EnumToggleButtons]
public enum MonsterStateType{
    Aggresive,
    Normal,
    Flee
}

[EnumToggleButtons]
public enum  MonsterAttribute{
    Fire,
    Water,
    Ice,
    Ground,
}

[EnumToggleButtons]
public enum MonsterArmor{
    Heavy,
    Middle,
    Light
}
[CreateAssetMenu(fileName = "MonsterData", menuName = "New MonsterData")]
public class MonsterData : ScriptableObject
{
    [PreviewField(80, ObjectFieldAlignment.Center)]
    [Tooltip("몬스터 프리뷰입니다")]
    public GameObject monsterObject;
    
    [Tooltip("세이브/로드 등에 사용될 숫자 아이디값입니다.")]
    public int id;

    [Tooltip("몬스터의 성향 타입니다")]
    public MonsterStateType type;

    [Tooltip("몬스터의 속성 입니다")]
    public MonsterAttribute attribute;

    [Tooltip("몬스터의 방어타입니다")]
    public MonsterArmor armorType;

    [Tooltip("UI 등에서 사용될 몬스터의 이름입니다")]
    public string monsterName = "*Required";

    [Tooltip("퀘스트 등에서 사용될 몬스터의 설명입니다")]
    public string description = "*Required";

    [Tooltip("몬스터의 최초 최대 체력입니다")]
    [HideReferenceObjectPicker]
    public float maxHealth = 100;

    [Tooltip("몬스터가 떨어졌을때, 드랍하는 아이탬입니다")]
    public MonsterDropItemSetting[] dropItem;

}

[System.Serializable]
public class MonsterDropItemSetting
{
    [PreviewField(80, ObjectFieldAlignment.Center)]
    public ItemData itemData;
    
    [Range(0,100)]
    public float probability;
}
