using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Net.Sockets;
using System.IO;
using System;
using TMPro;

public class Client : MonoBehaviour
{
    public TMP_InputField IPInput, PortInput, NickInput;
    string clientName;

    bool socketReady;
    TcpClient socket;
    NetworkStream stream;
    StreamWriter writer;
    StreamReader reader;

    private void Update() {
        if(socketReady && stream.DataAvailable){
            string data = reader.ReadLine();
            if(data != null){
                OnIncomingData(data);
            }
        }
    }
    public void ConnectToServer(){
        if(socketReady) return;

        string host = IPInput.text == "" ? "127.0.0.1" : IPInput.text;
        int port = PortInput.text == "" ? 7777 : int.Parse(PortInput.text);

        try{
            socket = new TcpClient(host, port);
            stream = socket.GetStream();
            writer =  new StreamWriter(stream);
            reader = new StreamReader(stream);
            socketReady = true;
        }
        catch(Exception e) {
            Chat.instance.ShowMessage($"SockerError : {e.Message}");
        }
    }
    void OnIncomingData(string data){
        if (data == "%NAME"){
            clientName = NickInput.text == "" ? "Guest" + UnityEngine.Random.Range(1000, 10000) : NickInput.text;
            Send($"&NAME|{clientName}");
            Debug.Log($"&NAME|{clientName}");
            return;
        }

        Chat.instance.ShowMessage(data);
    }
    void Send(string data){
        if(!socketReady) return;

        writer.WriteLine(data);
        writer.Flush();
    }

    public void OnSendBTN(TMP_InputField SendInput){
        if (!Input.GetButtonDown("Submit")) return;
        SendInput.ActivateInputField();
        if(SendInput.text.Trim() == "") return;

        string message = SendInput.text;
        SendInput.text = "";
        Send(message);
    }

    private void OnApplicationQuit() {
        CloseSocket();    
    }
    void CloseSocket(){
        if(!socketReady) return;

        writer.Close();
        reader.Close();
        socket.Close();
        socketReady = false;
    }
}
