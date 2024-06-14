<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.text.SimpleDateFormat" %>

<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Insert title here</title>
</head>
<body>
	HOME > 로그인 결과
	<hr>
	<%
		String pattern = "yyyy-MM-dd HH:mm"; 
		SimpleDateFormat sdf = new SimpleDateFormat(pattern); 
	%>
	
	<%
		String u_id = request.getParameter("id");
		String u_pw = request.getParameter("pw");
		if(u_id.equals("whghdus")&& u_pw.equals("12345")){
			session.setAttribute("memberId", u_id);
			session.setAttribute("memberPw", u_pw);

		
			out.println("새로운 세션 생성 성공 ! <br>");
			out.println(u_id+"님 환영합니다. <br>");
			out.println("세션에 접속한 마지막 일시 : "+sdf.format(session.getLastAccessedTime()));
		}else{
			out.println("세션 생성 실패.<br>로그인에 실패하였습니다.");
		}
	%>
	<form name="loginForm" action="test_06_04_03.jsp" method="POST">
		<input type="submit" value="로그아웃">
	</form>
</body>
</html>