<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title> 로그인 접속 후 세션 유지 시간  </title>
</head>
<body>
	Home > 로그인 접속 후 세션을 유지한 시간 출력하기
	<hr>
	<%
		String session_id = session.getId();//랜덤 생성
		long last_time = session.getLastAccessedTime();
		long start_time = session.getCreationTime();
		long keping_time = (last_time - start_time) / 60000;
		//long last_time_min = last_time /60000; long 타입이라 값이 이상하게 나옴 [ 28548103 분 ]
				
		
		out.println("1. 세션 아이디 : [ " + session_id + " ] <br>");
		out.println("2. 세션이 생성된 시간 : [ " + keping_time + " 분 ] <br>");
		//out.println("3. 세션이 가장 최근 접근한 시간 : [ " + last_time_min + " 분 ] <br>");
	%>	
</body>
</html>