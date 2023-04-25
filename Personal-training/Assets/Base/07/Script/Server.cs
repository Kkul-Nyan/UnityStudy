using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using UnityEngine.UI;
using System;
using System.IO;
using TMPro;


public class Server : MonoBehaviour
{   
    public TMP_InputField portInput;

    List<ServerClient> clients;
    List<ServerClient> disconnectList;

    TcpListener server;
    bool serverStarted;

    private void Update() {
        if(!serverStarted) return;

        foreach (ServerClient c in clients){
            if(!IsConnected(c.tcp)){
                c.tcp.Close();
                disconnectList.Add(c);
                continue;
            }
            else {
                NetworkStream s = c.tcp.GetStream();
                if(s.DataAvailable){
                    string data  = new StreamReader(s, true).ReadLine();
                    if(data != null){
                        OninIncomingData(c, data);
                    }
                }
            }
            for(int i = 0; i < disconnectList.Count -1; i++){
                Broadcast($"{disconnectList[i].clientName} 연결이 끊어졌습니다", clients);

                clients.Remove(disconnectList[i]);
                disconnectList.RemoveAt(i);
            }
        }
        
    }

    bool IsConnected(TcpClient c){
        try{
            if(c != null && c.Client != null && c.Client.Connected){
                if(c.Client.Poll(0, SelectMode.SelectRead)){ //Poll은 연결됬는지 확인을 위해 1바이트를 보내봄.제대로받으며누 true 아니면 false
                    return !(c.Client.Receive(new byte[1], SocketFlags.Peek) == 0);
                }
                return true;
            }
            else{
                return false;
            }
        }
        catch{
            return false;
        }
    }

    void OninIncomingData(ServerClient c, string data){
        if(data.Contains("&NAME")){
            c.clientName = data.Split("|")[1];
            Broadcast($"{c.clientName} is connected", clients);
            return;
        }
        Broadcast($"{c.clientName} : {data}", clients);
    }
    public void ServerOpen(){
        clients = new List<ServerClient>();
        disconnectList = new List<ServerClient>();
        IPAddress IP = IPAddress.Any;

        try{
            int port = portInput.text == "" ? 7777 : int.Parse(portInput.text);
            server = new TcpListener(IP, port);
            Debug.Log(IP);
            server.Start();

            StartListening();
            serverStarted = true;
            Chat.instance.ShowMessage($"Server start at {port}");
        }
        catch(Exception e){
            Chat.instance.ShowMessage($"Socket Error: {e.Message}");
        }
    }

    void StartListening(){
        server.BeginAcceptSocket(AcceptTcpClient, server);
    }

    void  AcceptTcpClient(IAsyncResult ar){
        TcpListener listener = (TcpListener)ar.AsyncState;
        clients.Add(new ServerClient(listener.EndAcceptTcpClient(ar)));
        StartListening();

        Broadcast("%NAME",new List<ServerClient>() { clients[clients.Count -1]});
    }

    void Broadcast(string data, List<ServerClient> cl){
        foreach (var c in cl){
            try{
                StreamWriter writer = new StreamWriter(c.tcp.GetStream());
                writer.WriteLine(data);
                writer.Flush();
            }
            catch(Exception e){
                Chat.instance.ShowMessage($"Writing Error : send Message{e.Message} to client {c.clientName}");
            }
        }
    }
}

public class ServerClient 
{
    public TcpClient tcp;
    public string clientName;

    public ServerClient(TcpClient cliendSocket){
        clientName = "Guest";
        tcp = cliendSocket;
    }
}
