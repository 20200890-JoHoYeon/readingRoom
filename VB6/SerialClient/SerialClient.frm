VERSION 5.00
Object = "{648A5603-2C6E-101B-82B6-000000000014}#1.1#0"; "MSCOMM32.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   9750
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5895
   LinkTopic       =   "Form1"
   ScaleHeight     =   9750
   ScaleWidth      =   5895
   StartUpPosition =   3  'Windows 기본값
   Begin VB.TextBox txtLog 
      Height          =   735
      Left            =   120
      TabIndex        =   2
      Text            =   "Text2"
      Top             =   1560
      Width           =   4815
   End
   Begin VB.CommandButton cmdSend 
      Caption         =   "Command1"
      Height          =   615
      Left            =   120
      TabIndex        =   1
      Top             =   840
      Width           =   4815
   End
   Begin VB.TextBox Text1 
      Height          =   615
      Left            =   120
      TabIndex        =   0
      Text            =   "Text1"
      Top             =   120
      Width           =   4815
   End
   Begin MSCommLib.MSComm MSComm1 
      Left            =   5160
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
' ClientForm.frm

Private Sub Command1_Click()

End Sub

Private Sub Form_Load()
    With MSComm1
        .CommPort = 6            ' COM6 사용 (서버와 연결된 포트)
        .Settings = "9600,N,8,1"
        .PortOpen = True
    End With
    txtLog.Text = "클라이언트 시작됨. 데이터를 서버로 전송합니다."
End Sub

Private Sub cmdSend_Click()
    Dim msg As String
    msg = txtSend.Text
    If MSComm1.PortOpen Then
        MSComm1.Output = msg
        txtLog.Text = "전송됨: " & msg
    Else
        txtLog.Text = "포트가 열려있지 않습니다."
    End If
End Sub

Private Sub Form_Unload(Cancel As Integer)
    If MSComm1.PortOpen Then MSComm1.PortOpen = False
End Sub

Private Sub Text2_Change()

End Sub

Private Sub Text1_Change()

End Sub

Private Sub txtLog_Change()

End Sub
