VERSION 5.00
Object = "{248DD890-BB45-11CF-9ABC-0080C7E7B78D}#1.0#0"; "MSWINSCK.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   9495
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   9495
   ScaleMode       =   0  '사용자
   ScaleWidth      =   5000
   StartUpPosition =   3  'Windows 기본값
   Begin VB.CommandButton deleteMsg 
      Caption         =   "내용 삭제"
      Height          =   495
      Left            =   120
      TabIndex        =   6
      Top             =   8880
      Width           =   1695
   End
   Begin VB.CommandButton deleteLog 
      Caption         =   "로그 삭제"
      Height          =   495
      Left            =   120
      TabIndex        =   5
      Top             =   4440
      Width           =   1815
   End
   Begin VB.Timer Timer1 
      Left            =   4080
      Top             =   600
   End
   Begin VB.TextBox txtLog 
      Height          =   2800
      Left            =   120
      MultiLine       =   -1  'True
      TabIndex        =   4
      Top             =   1440
      Width           =   3744
   End
   Begin VB.CommandButton cmdSend 
      Caption         =   "보내기"
      Height          =   495
      Left            =   2280
      TabIndex        =   3
      Top             =   8880
      Width           =   1575
   End
   Begin VB.TextBox txtSend 
      Height          =   2000
      Left            =   120
      MultiLine       =   -1  'True
      TabIndex        =   2
      Top             =   6720
      Width           =   3744
   End
   Begin VB.CommandButton cmdConnect 
      Caption         =   "서버 연결"
      Height          =   495
      Left            =   122
      TabIndex        =   1
      Top             =   840
      Width           =   1872
   End
   Begin MSWinsockLib.Winsock Winsock1 
      Left            =   4080
      Top             =   120
      _ExtentX        =   741
      _ExtentY        =   741
      _Version        =   393216
   End
   Begin VB.Label Label1 
      Caption         =   "전송 데이터"
      Height          =   495
      Left            =   120
      TabIndex        =   7
      Top             =   6120
      Width           =   2805
   End
   Begin VB.Shape Shape1 
      FillStyle       =   0  '단색
      Height          =   495
      Index           =   0
      Left            =   2153
      Shape           =   3  '원형
      Top             =   840
      Width           =   515
   End
   Begin VB.Label Title 
      Caption         =   "Client"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   2805
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
' 소켓 연결 세팅
Private Sub cmdConnect_Click()
    If Winsock1.State = sckConnected Then
        DisconnectWinsock
        cmdConnect.Caption = "서버 연결"
        WriteLog "연결 해제됨"
        Shape1(0).FillColor = RGB(0, 64, 0)
    ElseIf Winsock1.State = sckConnecting Then
        DisconnectWinsock
        DoEvents
        ConnectToServer
    ElseIf Winsock1.State = sckClosed Then
        ConnectToServer
    End If
End Sub

Private Sub ConnectToServer()
    ' 안전하게 초기화
    If Winsock1.State <> sckClosed Then
        Winsock1.Close
        DoEvents
        Dim startTime As Single
        startTime = Timer
        Do While Winsock1.State <> sckClosed
            DoEvents
            If Timer - startTime > 2 Then Exit Do
        Loop
    End If

    On Error Resume Next
    Winsock1.RemoteHost = "127.0.0.1"
    Winsock1.RemotePort = 10000
    Winsock1.Connect
    On Error GoTo 0

    WriteLog "서버 연결 시도 중..."
    Shape1(0).FillColor = RGB(255, 255, 0)
End Sub

Private Sub DisconnectWinsock()
    If Winsock1.State <> sckClosed Then
        Winsock1.Close
        Dim startTime As Single
        startTime = Timer
        Do While Winsock1.State <> sckClosed
            DoEvents
            If Timer - startTime > 2 Then Exit Do
        Loop
    End If
End Sub

Private Sub deleteLog_Click()
    txtLog.Text = ""
End Sub

Private Sub deleteMsg_Click()
    txtSend.Text = ""
End Sub

Private Sub Command1_Click()
    ' 여기에 기능 추가 가능
End Sub

Private Sub Form_Load()
    Shape1(0).FillColor = RGB(0, 64, 0)
    Title.Font.Name = "Arial"
    Title.Font.Bold = True
    Title.Font.Size = 14
    Label1.Font.Bold = True
    Label1.Font.Size = 14
End Sub

Private Sub Winsock1_Connect()
    WriteLog "서버에 연결됨!"
    cmdConnect.Caption = "연결 종료"
    Shape1(0).FillColor = RGB(255, 255, 0)
End Sub

Private Sub Winsock1_Close()
    WriteLog "서버와의 연결 종료됨"
    cmdConnect.Caption = "서버 연결"
    Shape1(0).FillColor = RGB(0, 64, 0)

    ' 꼭 초기화
    If Winsock1.State <> sckClosed Then
        Winsock1.Close
    End If
End Sub

Private Sub Winsock1_Error(ByVal Number As Integer, Description As String, _
                           ByVal Scode As Long, ByVal Source As String, _
                           ByVal HelpFile As String, ByVal HelpContext As Long, CancelDisplay As Boolean)
    WriteLog "Winsock 오류: " & Description & " (코드: " & Number & ", 상태: " & Winsock1.State & ")"
    CancelDisplay = True
    Shape1(0).FillColor = RGB(0, 64, 0)
    Winsock1.Close
End Sub

' 데이터 보내기
Private Sub cmdSend_Click()
    Dim msg As String
    msg = txtSend.Text
    If Winsock1.State = sckConnected Then
        Winsock1.SendData msg
        WriteLog "보냄: " & msg
        Call deleteMsg_Click
    Else
        MsgBox "서버와 연결되어 있지 않습니다.", vbExclamation
    End If
End Sub

' 데이터 받기
Private Sub Winsock1_DataArrival(ByVal bytesTotal As Long)
    Dim strData As String
    Winsock1.GetData strData
    WriteLog "받음: " & strData
End Sub

Private Sub WriteLog(ByVal message As String)
    txtLog.Text = txtLog.Text & "[" & Format(Now, "hh:nn:ss") & "] " & message & vbCrLf
End Sub


