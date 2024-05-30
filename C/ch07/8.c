//8 입력 받은 정수를 다음처럼 32비트의 이진수형태로 출력하시오.
//(만일 7이면, 0000 0000  0000 0000  0000 0000  0000 0111)
#include <stdio.h>
void main()
{
	printf("정수를 입력하세요\n");
	int n, i, j;
	scanf_s("%d", &n);

	for (i = 31; i >= 0; i--)
	{
		printf("%d", (n >> i) & 1);
		if(i%4==0) printf(" ");
	}


}