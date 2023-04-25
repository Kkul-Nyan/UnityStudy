using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class PlayerManager : MonoBehaviour
{
    public static PlayerManager instance;

    [SerializeField] private float hp;
    public float maxStamina;
    public float Stamina = 1;
    [HideInInspector] public float rightEye;
    [HideInInspector] public float leftEye;
    [HideInInspector] public float nose;
    [HideInInspector] public float rightEar;
    [HideInInspector] public float leftEar;
    [HideInInspector] public float frontRightArm;
    [HideInInspector] public float frontRightHand;
    [HideInInspector] public float frontLeftArm;
    [HideInInspector] public float frontLeftHand;
    [HideInInspector] public float backRightLeg;
    [HideInInspector] public float backRightFoot;
    [HideInInspector] public float backLeftLeg;
    [HideInInspector] public float backLeftFoot;
    [HideInInspector] public float tail;
    [HideInInspector] public float heart;
    [HideInInspector] public float lung;
    [HideInInspector] public float liver;


    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
        hp = (rightEar + leftEar + rightEye + leftEye + nose + frontLeftArm
            + frontLeftHand + frontRightArm + frontRightHand + backLeftFoot + backLeftLeg + backRightFoot + backRightLeg
            + tail + heart + lung + liver) * 2f;
        DontDestroyOnLoad(gameObject);
    }

    public void DataforLoad()
    {
        SaveLoadManager load = FindObjectOfType<SaveLoadManager>();
        rightEye = load.rightEye;
        leftEye = load.leftEye;
        nose = load.nose;
        rightEar = load.rightEar;
        leftEar = load.leftEar;
        frontRightArm = load.frontRightArm;
        frontRightHand = load.frontRightHand;
        frontLeftArm = load.frontLeftArm;
        frontLeftHand = load.frontLeftHand;
        backRightLeg = load.backRightLeg;
        backRightFoot = load.backRightFoot;
        backLeftLeg = load.backLeftLeg;
        backLeftFoot = load.backLeftFoot;
        tail = load.tail;
        heart = load.heart;
        lung = load.lung;
        liver = load.liver;
    }
}
