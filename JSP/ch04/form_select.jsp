<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>셀렉트 화면</title>
</head>
<body>
	HOME > Language
	<hr>
	<form action="#" method="get">
		<fieldset style="width:300px">
			<legend>언어 선택</legend><p>
			<select name="language" multiple>
			<option value="choice">선택</option>
			<option value="korean"selected>한국어</option>
			<option value="english">영어</option>
			<option value="chinese">중국어</option>
			<option value="japanese">일본어</option>
			<option value="spanish" disabled>스페인어</option>
			</select>
		</fieldset>
	</form>
		
</body>
</html>