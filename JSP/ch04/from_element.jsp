<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>엘리먼트 화면</title>
</head>
<body>
	HOME > Department
	<hr>
	<form action="#" method="get">
		ID : <br>
		<input type="text" name="id"><br><br>
		Password : <br>
		<input type="password" name="password"><br><br>
		<input type="submit" value="Login"><input type="reset" value="Cancel">
	
		<fieldset style="width:300px">
			<legend>학과 선택</legend><p>
			학번 : <br>
			<input type="text" name="p_code" size="10"> <br>
			지원학과 : 
			<hr>
			<input type="radio" name="dept">컴퓨터정보공학과 <br>
			<input type="radio" name="dept">컴퓨터소프트웨어공학과 <br>
			<input type="radio" name="dept">인공지능소프트웨어학과 <br>
			<hr>
			<div align="center">
				<input type="submit" value="Finish"> &nbsp;
				<input type="reset" value="Cancel">
			</div>
			<span>span 데이터</span>
			<span>span 데이터</span>
			<span>span 데이터</span>
			<span>span 데이터</span>
			<span>span 데이터</span>
			<span>span 데이터</span>
			<span>span 데이터</span>
			<span>span 데이터</span>
		</fieldset>
		================================<br>
		<span>span 데이터</span>
		<span>span 데이터</span>
		<span>span 데이터</span>
		<span>span 데이터</span>
		<span>span 데이터</span>
		<span>span 데이터</span>
		<span>span 데이터</span>
		<span>span 데이터</span>
	</form>
</body>
</html>