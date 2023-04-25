using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class objectPool : MonoBehaviour
{
    public static objectPool instance;
    // Start is called before the first frame update
    private GameObject poolingObjectyPrefab;
    
    Queue<BulletController> poolingObjectQueue = new Queue<BulletController>();
    private void Awake()
    {
        instance = this;
        Initailized(10);
    }

    private void Initailized(int initCount)
    {
        for(int i = 0; i < initCount; ++i)
        {
            poolingObjectQueue.Enqueue(CreatNewObject()); 
        }
    }
    private BulletController CreatNewObject()
    {
        BulletController newObjcet = Instantiate(poolingObjectyPrefab).GetComponent<BulletController>();
        newObjcet.gameObject.SetActive(false);
        newObjcet.transform.SetParent(transform);
        
        return newObjcet;
    }

    public static BulletController GetObject()
    { 
        if(instance.poolingObjectQueue.Count>0)
        {
            BulletController obj = instance.poolingObjectQueue.Dequeue();
            obj.transform.SetParent(null);
            obj.gameObject.SetActive(true);
            return obj;
        }
        else
        {
            BulletController newObj = instance.CreatNewObject();
            newObj.gameObject.SetActive(true);
            newObj.transform.SetParent(null);
            return newObj;
        }
    }

    public static void ReturnObject(BulletController obj)
    {
        obj.gameObject.SetActive(false);
        obj.transform.SetParent(instance.transform);
        instance.poolingObjectQueue.Enqueue(obj);
    }
}
