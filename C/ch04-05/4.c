//삼항연산자를 이용하여 입력한 세 수의 최댓값을 구하시오.
#include <stdio.h>
void main()
{
	int d1, d2, d3, result;

	printf("값을 3개를 입력해!\n");
	scanf_s("%d %d %d", &d1, &d2, &d3);
	result = d1 > d2 ? d1 : d2;
	result = result > d3 ? result : d3;
	printf("입력한 세 수의 최댓값: %d\n", result);
}