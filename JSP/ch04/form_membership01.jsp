<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>파라미터 전송 화면 01</title>
</head>
<body>
	HOME > Join the Membership
	<hr>
	<form action="from_membership02.jsp" method="get" name="persen_info">
		<fieldset style="width:400px">
			<legend>개인 정보 입력</legend><p>
			아이디 : <input type="text" name="p_id" size="16"><br>
			비밀번호 : <input type="password" name="p_pw" size="16"><br>
			이름 : <input type="text" name="p_name" size="16"><br>
			연락처 : 
			<select name="choice" style="width: 60px; height:20.px">
				<option value="choice">선택</option>
				<option value="KT">KT</option>
				<option value="SKT">SKT</option>
				<option value="LGU+">LGU+</option>
			</select>
			<input type="text" name="phone1" size="3" maxlength="3"> - 
			<input type="text" name="phone2" size="4" maxlength="4"> - 
			<input type="text" name="phone3" size="4" maxlength="4"><br>
			성별 : <input type="radio" name="gender" value="남성">남
			<input type="radio" name="gender" value="여성">여<br><br>
			취미 : <input type="checkbox" name="hobby" value="운동">운동
			<input type="checkbox" name="hobby" value="독서">독서
			<input type="checkbox" name="hobby" value="여행">여행
			<input type="checkbox" name="hobby" value="음악감상">음악감상 <br><br>
			본인소개 : <br>
			<textarea name="Introduction" rows="3" cols="30"></textarea> 
			<hr>
			<div align="center">
				<input type="submit" value="가입하기"> &nbsp;
				<input type="reset" value="취소">
			</div>
		</fieldset>
	</form>
</body>
</html>