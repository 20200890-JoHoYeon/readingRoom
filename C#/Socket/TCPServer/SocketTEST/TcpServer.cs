// TCP Server (연결 지향)
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

class TcpServer
{
    static void Main()
    {
        
        TcpListener server = new TcpListener(IPAddress.Any, 5000);
        server.Start();
        Console.WriteLine("TCP 서버 시작됨. 클라이언트 대기 중...");
        TcpClient client = server.AcceptTcpClient();  // 연결 수락
        NetworkStream stream = client.GetStream();
        
        string received = "";
        while (received != "0")
        {
            byte[] buffer = new byte[1024];
            int byteCount = stream.Read(buffer, 0, buffer.Length);  // 수신
            received = Encoding.UTF8.GetString(buffer, 0, byteCount);
            Console.WriteLine("클라이언트로부터: " + received);

            // 응답 전송
            byte[] response = Encoding.UTF8.GetBytes("Hello TCP Client!");
            stream.Write(response, 0, response.Length);

       
        }
        Console.WriteLine("클라이언트 연결 종료됨.");
        client.Close();
        server.Stop();
    }
}


// TCP Server (연결 지향)
/*
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

class TcpServer
{
    static void Main()
    {
        TcpListener server = new TcpListener(IPAddress.Any, 5000);
        server.Start();
        Console.WriteLine("TCP 서버 시작됨. 클라이언트 대기 중...");

        TcpClient client = server.AcceptTcpClient();  // 연결 수락
        NetworkStream stream = client.GetStream();

        byte[] buffer = new byte[1024];
        int byteCount = stream.Read(buffer, 0, buffer.Length);  // 수신
        string received = Encoding.UTF8.GetString(buffer, 0, byteCount);
        Console.WriteLine("클라이언트로부터: " + received);

        // 응답 전송
        byte[] response = Encoding.UTF8.GetBytes("Hello TCP Client!");
        stream.Write(response, 0, response.Length);

        client.Close();
        server.Stop();
    }
}
*/