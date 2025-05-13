// TCP Client
using System;
using System.Net.Sockets;
using System.Text;

class TcpClientApp
{
    // TCP Client (반복 송수신 및 조건 종료 - 쓰고 읽기)
    static void Main()
    {
        string message = "";
        TcpClient client = new TcpClient("127.0.0.1", 5000);
        NetworkStream stream = client.GetStream();

        while(true) {
           
            Console.Write("서버에 보낼 값(종료는 0): ");
            message = Console.ReadLine();
            //string message = "Hello TCP Server!";
            byte[] data = Encoding.UTF8.GetBytes(message);
            stream.Write(data, 0, data.Length);  // 메시지 전송
            Console.WriteLine("[" + DateTime.Now.ToString("HH:mm:ss") + "] 서버로 데이터 전송 완료");

            if (message == "0")
                break;  // 바로 종료


            byte[] buffer = new byte[1024];
            int bytes = stream.Read(buffer, 0, buffer.Length);  // 응답 수신

            Console.WriteLine("서버 응답: " + Encoding.UTF8.GetString(buffer, 0, bytes));
            Console.WriteLine("[" + DateTime.Now.ToString("HH:mm:ss") + "] 서버 응답 전송 완료");
        }
        client.Close();

    }
}
// TCP Client (반복 송신 및 조건 종료 - 쓰기)
/*
class TcpClientApp
{
    static void Main()
    {
        string message = "";
        TcpClient client = new TcpClient("127.0.0.1", 5000);
        NetworkStream stream = client.GetStream();

        while (message != "0")
        {

            Console.Write("서버에 보낼 값(종료는 0): ");
            message = Console.ReadLine();
            //string message = "Hello TCP Server!";
            byte[] data = Encoding.UTF8.GetBytes(message);
            stream.Write(data, 0, data.Length);  // 메시지 전송

            byte[] buffer = new byte[1024];
            int bytes = stream.Read(buffer, 0, buffer.Length);  // 응답 수신

            Console.WriteLine("서버 응답: " + Encoding.UTF8.GetString(buffer, 0, bytes));

        }
        client.Close();

    }
}
*/

// TCP Client 원본
/*
using System;
using System.Net.Sockets;
using System.Text;

class TcpClientApp
{
    static void Main()
    {
        TcpClient client = new TcpClient("127.0.0.1", 5000);
        NetworkStream stream = client.GetStream();

        string message = "Hello TCP Server!";
        byte[] data = Encoding.UTF8.GetBytes(message);
        stream.Write(data, 0, data.Length);  // 메시지 전송

        byte[] buffer = new byte[1024];
        int bytes = stream.Read(buffer, 0, buffer.Length);  // 응답 수신
        Console.WriteLine("서버 응답: " + Encoding.UTF8.GetString(buffer, 0, bytes));

        client.Close();
    }
}
*/