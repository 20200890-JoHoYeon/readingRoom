<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입 성공</title>
</head>
<body>
	<%
		request.setCharacterEncoding("utf-8");
		String id=request.getParameter("id");
		String name=request.getParameter("name");
		String pw=request.getParameter("pw");
		String age=request.getParameter("age");
		String tel=request.getParameter("tel");
		
	%>
	<p> 닉네임 : <%= id %>
	<p> 작성자 : <%= name %>
	<p> 비밀번호 : <%= pw %>
	<p> 나이 : <%= age %>
	<p> 휴대폰번호 : <%= tel %>
</body>
</html>