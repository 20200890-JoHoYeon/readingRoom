//로그인 버튼 클릭 시 실행될 함수
document.getElementById("loginButton").addEventListener("click", function () {
  //입력된 아이디와 비밀번호 가져오기
  var username = document.getElementById("username").value;
  var password = document.getElementById("password").value;

  // 서버로 정보를 전달하는 부분
  fetch("/login", {
    //'/login' 엔드포인트로 POST 요청 보내기
    method: "POST", //HTTP POST 메소드 사용
    headers: {
      "Content-Type": "application/json", //요청 헤더 설정
    },
    body: JSON.stringify({ username: username, password: password }), //JSON 형식으로 아이디와 비밀번호 전송
  })
    .then((response) => {
      //서버로부터 응답 처리
      if (response.ok) {
        //성공일 경우
        window.location.href = "Main.html"; // 로그인 성공 시 메인 페이지로 이동
      } else {
        alert("아이디 또는 비밀번호가 올바르지 않습니다."); //알림창 띄우기
      }
    })
    .catch((error) => {
      //요청 보내는 도중 오류 발생한 경우
      console.error("로그인 요청 오류:", error);
      alert("서버 오류");
    });
});
