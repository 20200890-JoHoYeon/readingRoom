<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입</title>
	<script>
	 function test() {
		var f = document.loginForm;
		var id = f.id.value;
		var name = f.name.value;
		var pw = f.pw.value;
		var age = f.age.value;
		var tel = f.tel.value;
		
		var regExpId = /^[a-z|A-Z|ㄱ-ㅎ|ㅏ-ㅣ|가-힣]/;
		var regExpAge = /^\d*/;
		var regExpTel = /^\d{3}\-\d{4}-\d{4}$/;
		
		
		if(!regExpId.test(id))
			{
				alert("닉네임은 영문 또는 한글만 입력하세요.");
				f.id.focus();
				return false;
			}
		else if(name ==""){
			alert("작성자는 필수 입력란 입니다.");
			f.name.focus();
			return false;
		}
		else if((pw.length < 8)||(pw.length > 16)){
			alert("비밀번호는 8자 이상 16자리 이하로 입력하세요.");
			f.pw.focus();
			return false;
		}
		else if(!regExpAge.test(age))
			{
				alert("나이는 숫자로만 입력해 주세요.");
				f.age.focus();
				return false;
			}
		else if(!regExpTel.test(tel))
			{
				alert("핸드폰번호는 ex) 000-0000-0000 형식으로만 입력해 주세요.");
				f.tel.focus();
				return false;
			}				
		else return true;
	 }
	</script>
</head>
<body>
	<form name="loginForm" action="test_05.jsp" 
		method="post" onsubmit="return test()">
		닉네임 : <br> 
		<input type="text" name="id"><br><br>
		작성자 : <br> 
		<input type="text" name="name"><br><br>
		비밀번호 : <br> 
		<input type="password" name="pw"><br><br>	
		나이 : <br> 
		<input type="text" name=age><br><br>	
		핸드폰번호 : <br> 
		<input type="text" name="tel"><br><br>		
		<input type="submit" value=" 회원가입 ">
	</form>
</body>
</html>