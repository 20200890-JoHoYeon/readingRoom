VERSION 5.00
Object = "{648A5603-2C6E-101B-82B6-000000000014}#1.1#0"; "MSCOMM32.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   10440
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6405
   LinkTopic       =   "Form1"
   ScaleHeight     =   10440
   ScaleWidth      =   6405
   StartUpPosition =   3  'Windows 기본값
   Begin VB.CommandButton cmdSend 
      Caption         =   "Command1"
      Height          =   615
      Left            =   240
      TabIndex        =   1
      Top             =   960
      Width           =   5295
   End
   Begin VB.TextBox txtLog 
      Height          =   615
      Left            =   240
      TabIndex        =   0
      Text            =   "Text1"
      Top             =   120
      Width           =   5295
   End
   Begin MSCommLib.MSComm MSComm1 
      Left            =   5640
      Top             =   120
      _ExtentX        =   1005
      _ExtentY        =   1005
      _Version        =   393216
      DTREnable       =   -1  'True
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
' ServerForm.frm

Private Sub Form_Load()
    With MSComm1
        .CommPort = 10           ' COM3 사용 (환경에 맞게 수정)
        .Settings = "9600,N,8,1" ' Baud rate, Parity, Data bits, Stop bit
        .InputLen = 0            ' 전체 수신 데이터 읽기
        .InputMode = comInputModeText
        .RThreshold = 1          ' 수신 버퍼에 1문자 이상일 때 OnComm 이벤트 발생
        .PortOpen = True         ' 포트 열기
    End With
    txtLog.Text = "서버 시작됨. 데이터 수신 대기중..."
End Sub

Private Sub MSComm1_OnComm()
    Dim strData As String
    Select Case MSComm1.CommEvent
        Case comEvReceive
            strData = MSComm1.Input
            txtLog.Text = "수신됨: " & strData
    End Select
End Sub

Private Sub Form_Unload(Cancel As Integer)
    If MSComm1.PortOpen Then MSComm1.PortOpen = False
End Sub

