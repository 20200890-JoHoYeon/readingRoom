//4 세 정수를 입력 받아  제일 큰 수를 제일 작은 수로 나눈 
// 결과를 소수점 이하를 포함하여 정확하게 출력하시오.
#include <stdio.h>
void main()
{
	int a,b,c, max, min;

	printf("세 정수를 입력!\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a>=c) max = a;
	else if (b >= a && b >= c) max = b;
	else  max = c;
	
	if (a <= b && a <= c) min = a;
	else if (b <= a && b <= c) min = b;
	else  min = c;

	double result = (double)max / (double)min;
	printf("결과: %lf\n", result);
}