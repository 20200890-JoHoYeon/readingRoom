//MySQL 모듈 가져오기
const mysql = require("mysql");

//MySQL 서버에 연결하는 connection 객체 생성
const connection = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "011129",
  database: "member",
});

//MySQL 서버에 연결
connection.connect();

//'user' 테이블에서 모든 데이터 가져오는 쿼리 실행
connection.query("SELECT*from users", (error, rows, fields) => {
  //에러 발생하면 예외 던지기
  if (error) throw error;

  //쿼리 결과 콘솔창에 출력
  console.log("User info is: ", rows);
});

//MySQL 연결 종료
connection.end();
