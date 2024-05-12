//필요한 모듈 가져오기
const express = require("express");
const path = require("path"); // path 모듈을 가져옴
const mysql = require("mysql");
const bodyParser = require("body-parser");

//Express 앱 생성
const app = express();
const port = 3000; //사용할 포트번호

//MySQL 연결 설정
const connection = mysql.createConnection({
  host: "localhost", //MySQL 서버 호스트
  user: "root", //MySQL 사용자 이름
  password: "011129", //MySQL 사용자 비밀번호
  database: "member", //사용할 데이터베이스 이름
});

//MySQL 연결
connection.connect((err) => {
  if (err) {
    console.error("MySQL 연결 실패: ", err);
    return;
  }
  console.log("MySQL 연결 성공!");
});

// POST 요청을 파싱하기 위한 미들웨어 설정
app.use(bodyParser.json());
app.use(express.static(path.join(__dirname, "public")));

//로그인 페이지 요청받았을 때 login.html 파일을 클라이언트에 제공
app.get("/Login.html", (req, res) => {
  res.sendFile(__dirname + "/Login.html");
});

//메인 페이지 요청받았을 때 Main.html 파일을 클라이언트에 제공
app.get("/Main.html", (req, res) => {
  res.sendFile(__dirname + "/Main.html");
});

//로그인 요청 처리
app.post("/login", (req, res) => {
  const username = req.body.username; //요청 본문에서 아이디 가져오기
  const password = req.body.password; //요청 본문에서 비밀번호 가져오기

  const query = "SELECT * FROM users WHERE id=? AND password=?"; //사용자가 입력한 아이디와 비밀번호 확인 쿼리

  //MySQL에 쿼리 보내기
  connection.query(query, [username, password], (err, results) => {
    if (err) {
      console.error("쿼리 오류:", err);
      res.status(500).send("서버 오류");
      return;
    }

    if (results.length > 0) {
      res.status(200).send();
    } else {
      res.status(401).send();
    }
  });
});

//Express 앱을 지정된 포트에서 실행
app.listen(port, () => {
  console.log(`서버 시작: http://localhost:${port}`);
});
