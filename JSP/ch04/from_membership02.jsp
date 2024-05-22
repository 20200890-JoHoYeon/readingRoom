<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>파라미터 전송 화면 02</title>
</head>
<body>
	HOME > Personal Information Inquiry
	<hr>
	<%
		request.setCharacterEncoding("utf-8");
		String id = request.getParameter("p_id");
		String pw = request.getParameter("p_pw");
		String name = request.getParameter("p_name");
		String choice = request.getParameter("choice");
		String ph01 = request.getParameter("phone1");
		String ph02 = request.getParameter("phone2");
		String ph03 = request.getParameter("phone3");
		String gender = request.getParameter("gender");
		String[] hob = request.getParameterValues("hobby");
		String intro = request.getParameter("Introduction");
	%>
	<p> 아이디 : <%= id %>
	<p> 비밀번호 : <%= pw %>
	<p> 번호 : <%= ph01 %> - <%= ph02 %> - <%= ph03 %> 
	<p> 성별 : <%= gender %>
	<p> 취미 : 
	<% if(hob!=null) 
	{
		for(int count=0; count<hob.length; count ++)
		{
			out.println("" + hob[count]);
		}
	}
	%>
	<p> 본인 소개 : <%= intro %>
	
</body>
</html>