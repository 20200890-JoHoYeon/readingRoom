//1 입력 받은 문자가 대문자이면 소문자로, 소문자이면 대문자로, 그 외는 그대로 출력하시오.
#include <stdio.h>
void main() 
{
	char c;
	
	printf("문자 입력!\n");
	scanf_s("%c", &c,1);
	if (c >='A' && c <='Z') {
		printf("%c", c+32); //c+'a'-'A'
	}
	else if (c >= 'a' && c <= 'z') {
		printf("%c", c-32);
	}
	else {
		printf("%c", c);
	}
}