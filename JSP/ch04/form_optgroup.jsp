<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>옵션 그룹 화면</title>
</head>
<body>
	<body>
	HOME > Language
	<hr>
		<form action="#" method="get">
		<fieldset style="width:300px">
		<legend>소속 국가</legend><p>
			<select name="country">
				<option value="choice">선택</option>
				<optgroup label="본인 국적" disabled>
					<option value="korea">한국</option>
					<option value="USA">미국</option>
					<option value="ch">중굴</option>				
				</optgroup>
				<option value="japan">일본</option>
				<option value="Spain">스페인</option>
			</select>
		</fieldset>
		</form>
	</body>
</body>
</html>