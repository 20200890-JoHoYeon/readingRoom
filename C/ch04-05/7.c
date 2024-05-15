//비트논리연산자를 이용하여 입력 받은 문자의 아스키값을 이진수로 출력하시오.
//(가령 ‘A’ 면, 0100 0001 출력)
#include <stdio.h>
void main()
{
	char a;

	printf("문자를 입력해!\n");
	scanf_s("%c", &a,1);

	printf("이진수 변환값:\n");
	printf("%d", a >> 7 & 1);
	printf("%d", a >> 6 & 1);
	printf("%d", a >> 5 & 1);
	printf("%d ", a >> 4 & 1);
	printf("%d", a >> 3 & 1);
	printf("%d", a >> 2 & 1);
	printf("%d", a >> 1 & 1);
	printf("%d", a >> 0 & 1);
}