using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityChan;

public class MatchMaker : MonoBehaviourPunCallbacks
{
    public GameObject photonObject;
    void Start()
    {
    Debug.Log("start");
       PhotonNetwork.ConnectUsingSettings();
       PhotonNetwork.GameVersion = "0.1"; 
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("OnConnectedToMaster() called by Pun");
        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("OnJoinedRoom() called by Pun. Now tyhis client is in a room");
        
        float randoxX = Random.Range(-6f,6f);

        PhotonNetwork.Instantiate(photonObject.name, new Vector3(randoxX, 1f, 0f), Quaternion.identity);

        GameObject mainCamera = GameObject.FindWithTag("MainCamera");
        mainCamera.GetComponent<ThirdPersonCamera>().enabled = true;
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log("OnJoinRAndomFailed() was called by PUN. NO random room available,"+ "so we create one. \nCalling: PhotonNetwork.CreateRoom");
    }

    void Update()
    {
        
    }
}
