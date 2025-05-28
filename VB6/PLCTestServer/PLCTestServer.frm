VERSION 5.00
Object = "{248DD890-BB45-11CF-9ABC-0080C7E7B78D}#1.0#0"; "MSWINSCK.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   9495
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4710
   LinkTopic       =   "Form1"
   ScaleHeight     =   9495
   ScaleMode       =   0  '사용자
   ScaleWidth      =   5000
   StartUpPosition =   3  'Windows 기본값
   Begin VB.CommandButton deleteMsg 
      Caption         =   "내용 삭제"
      Height          =   495
      Left            =   122
      TabIndex        =   6
      Top             =   8760
      Width           =   1884
   End
   Begin VB.CommandButton deleteLog 
      Caption         =   "로그 삭제"
      Height          =   495
      Left            =   122
      TabIndex        =   5
      Top             =   4440
      Width           =   1884
   End
   Begin VB.Timer Timer1 
      Left            =   4080
      Top             =   600
   End
   Begin VB.TextBox txtSend 
      Height          =   2000
      Left            =   120
      MultiLine       =   -1  'True
      TabIndex        =   4
      Top             =   6600
      Width           =   3768
   End
   Begin VB.CommandButton cmdSend 
      Caption         =   "보내기"
      Height          =   495
      Left            =   2160
      TabIndex        =   3
      Top             =   8760
      Width           =   1884
   End
   Begin VB.TextBox txtLog 
      Height          =   2895
      Left            =   120
      MultiLine       =   -1  'True
      TabIndex        =   2
      Top             =   1440
      Width           =   3855
   End
   Begin MSWinsockLib.Winsock Winsock1 
      Left            =   4080
      Top             =   120
      _ExtentX        =   741
      _ExtentY        =   741
      _Version        =   393216
   End
   Begin VB.CommandButton cmdStart 
      Caption         =   "서버 시작"
      Height          =   495
      Left            =   122
      TabIndex        =   1
      Top             =   840
      Width           =   1884
   End
   Begin VB.Label Title 
      Caption         =   "Server"
      Height          =   495
      Left            =   120
      TabIndex        =   7
      Top             =   120
      Width           =   2820
   End
   Begin VB.Shape Shape1 
      FillColor       =   &H00400000&
      FillStyle       =   0  '단색
      Height          =   495
      Index           =   1
      Left            =   2760
      Shape           =   3  '원형
      Top             =   840
      Width           =   495
   End
   Begin VB.Shape Shape1 
      FillColor       =   &H00400000&
      FillStyle       =   0  '단색
      Height          =   495
      Index           =   0
      Left            =   2167
      Shape           =   3  '원형
      Top             =   840
      Width           =   518
   End
   Begin VB.Label Label1 
      Caption         =   "전송 데이터"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   6120
      Width           =   2820
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub cmdStart_Click()
    If Winsock1.State <> sckListening And Winsock1.State <> sckConnected Then
        Winsock1.Close
        DoEvents

        Dim startTime As Single
        startTime = Timer
        Do While Winsock1.State <> sckClosed
            DoEvents
            If Timer - startTime > 2 Then Exit Do
        Loop

        On Error Resume Next
        Winsock1.LocalPort = 10000
        Winsock1.Listen
        If Err.Number <> 0 Then
            WriteLog "서버 시작 실패: 포트를 사용할 수 없음"
            Exit Sub
        End If
        On Error GoTo 0

        WriteLog "서버 시작, 포트 10000 대기중..."
        Shape1(0).FillColor = RGB(255, 255, 0)
        cmdStart.Caption = "서버 종료"
    Else
        Winsock1.Close
        WriteLog "서버 종료됨."
        Shape1(0).FillColor = RGB(0, 64, 0)
        Shape1(1).FillColor = RGB(0, 64, 0)
        cmdStart.Caption = "서버 시작"
    End If
End Sub

Private Sub Titles_Click()

End Sub

Private Sub Winsock1_Error(ByVal Number As Integer, Description As String, _
                           ByVal Scode As Long, ByVal Source As String, _
                           ByVal HelpFile As String, ByVal HelpContext As Long, CancelDisplay As Boolean)
    WriteLog "Winsock 오류: " & Description & " (코드: " & Number & ")"
    CancelDisplay = True
    Winsock1.Close
End Sub

Private Sub deleteLog_Click()
    txtLog.Text = ""
End Sub

Private Sub deleteMsg_Click()
    txtSend.Text = ""
End Sub

Private Sub Form_Load()
    Shape1(0).FillColor = RGB(0, 64, 0)
    Shape1(1).FillColor = RGB(0, 64, 0)
    Title.Font.Name = "Arial"
    Title.Font.Bold = True
    Title.Font.Size = 14
    Label1.Font.Bold = True
    Label1.Font.Size = 14
End Sub

Private Sub Winsock1_ConnectionRequest(ByVal requestID As Long)
    If Winsock1.State <> sckClosed Then Winsock1.Close
    Winsock1.Accept requestID
    WriteLog "클라이언트 연결됨"
    Shape1(1).FillColor = RGB(255, 255, 0)
End Sub

Private Sub Winsock1_Close()
    WriteLog "클라이언트 연결 종료됨"
    Shape1(1).FillColor = RGB(0, 64, 0)

    ' 다시 리슨 시작
    If Winsock1.State <> sckClosed Then Winsock1.Close
    DoEvents
    On Error Resume Next
    Winsock1.LocalPort = 10000
    Winsock1.Listen
    If Err.Number <> 0 Then
        WriteLog "리슨 실패: 포트를 사용할 수 없음"
    Else
        WriteLog "서버 대기 상태로 전환됨."
    End If
    On Error GoTo 0
End Sub

Private Sub Winsock1_DataArrival(ByVal bytesTotal As Long)
    Dim strData As String
    Winsock1.GetData strData
    WriteLog "받음: " & strData
    'Winsock1.SendData "서버 수신: " & strData
End Sub

Private Sub cmdSend_Click()
    If Winsock1.State = sckConnected Then
        Winsock1.SendData txtSend.Text
        WriteLog "보냄: " & txtSend.Text
        Call deleteMsg_Click
    End If
End Sub

Private Sub WriteLog(ByVal message As String)
    txtLog.Text = txtLog.Text & "[" & Format(Now, "hh:nn:ss") & "] " & message & vbCrLf
End Sub


