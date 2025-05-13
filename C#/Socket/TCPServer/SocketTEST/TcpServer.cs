// TCP Server 
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

// TCP Server (반복 송수신 및 조건 종료 - 읽고 쓰기)
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
        string message = "";
        while (true)
        {
            byte[] buffer = new byte[1024];
            int byteCount = stream.Read(buffer, 0, buffer.Length);  // 수신
            received = Encoding.UTF8.GetString(buffer, 0, byteCount);
            Console.WriteLine("[" + DateTime.Now.ToString("HH:mm:ss") + "] 클라이언트로부터: " + received);

            if (received == "0")
            {
                byte[] endMsg = Encoding.UTF8.GetBytes("서버연결 종료됨.");
                stream.Write(endMsg, 0, endMsg.Length);
                break;
            }

            // 응답 전송
            Console.Write("서버에 보낼 값: ");
            message = Console.ReadLine();
            byte[] response = Encoding.UTF8.GetBytes(message);
            //byte[] response = Encoding.UTF8.GetBytes("Hello TCP Client!");
            if (received == "0") response = Encoding.UTF8.GetBytes("서버연결 종료됨.");
            stream.Write(response, 0, response.Length);
            Console.WriteLine("[" + DateTime.Now.ToString("HH:mm:ss") + "] 클라이언트로 응답 전송 완료");
        }
        Console.WriteLine("클라이언트 연결 종료됨.");
        client.Close();
        server.Stop();
    }
}

// TCP Server (반복 수신 및 조건 종료 - 읽기)
/*
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
*/

// TCP Server 원본
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