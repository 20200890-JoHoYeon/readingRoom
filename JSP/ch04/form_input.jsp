<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입</title>
</head>
<body>
	HOME > Person Information
	<form action="#" method="get" name="person_info">
		이름 : <input type="text" name="p_name" size="10"><br><br>
		학번 : <input type="text" name="p_code" size="10"><br><br>
		성별 : <input type="radio" name="gender">남
		<input type="radio" name="gender">여<br><br>
		취미 : <input type="checkbox" name="hobby">운동
		<input type="checkbox" name="hobby">독서
		<input type="checkbox" name="hobby">음악감상
		<input type="checkbox" name="hobby1">여행<br>
		<input type="submit" value="가입하기"><input type="reset" value="다시 작성">
	</form>	
</body>
</html>