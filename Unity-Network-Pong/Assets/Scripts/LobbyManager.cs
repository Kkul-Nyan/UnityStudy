using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;

public class LobbyManager : MonoBehaviourPunCallbacks
    // 접속상태를 감지하여 Pun서비스의 이벤트를 감지할수 있기 위해 사용 
{
    private readonly string gameVersion = "1";

    public Text connectionInfoText;
    public Button joinButton;
    
    private void Start()
    {
        PhotonNetwork.GameVersion = gameVersion;
        PhotonNetwork.ConnectUsingSettings(); //마스터서버에 접속시도

        joinButton.interactable = false;
        connectionInfoText.text = "Connecting To Master Server...";
    }

    //접속성공시 override들이 순서되로 자동으로 실행된다.
    public override void OnConnectedToMaster()
    {
        joinButton.interactable = true;
        connectionInfoText.text = "Online :  Connected to Master Server";
    }
    
    public override void OnDisconnected(DisconnectCause cause)
    {
        joinButton.interactable = false;
        connectionInfoText.text = $"Offline : Connection Disabled{cause.ToString()} - Try Reconnecting...";
        //재접속시도
        PhotonNetwork.ConnectUsingSettings();
    }
    
    public void Connect()
    {
        joinButton.interactable = false;

        if(PhotonNetwork.IsConnected)
        {
            connectionInfoText.text = "Connecting to Random Room...";
            PhotonNetwork.JoinRandomRoom();
        }
        else
        {
            joinButton.interactable = false;
            connectionInfoText.text = "Offline : Connection Disabled - Try Reconnecting...";
        }
    }
    
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        connectionInfoText.text = "There is no empty room, Creating new Room";
        PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = 2 });
    }
    
    public override void OnJoinedRoom()
    {
        connectionInfoText.text = "Connected with Room";
        PhotonNetwork.LoadLevel("Main"); //호스트가 실행하게 되면 다른 플레이어도 씬을 로드하게된다
        // 그리고 자동으로 동기화가 된다.
    }
}