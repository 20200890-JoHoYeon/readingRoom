//실수 2개를 입력 받아 정수 값만의 곱을 구하시오.
//(예)5.3 과  2.7 입력 = > 5 * 2 = 10

#include <stdio.h>
void main()
{
	double d1, d2;
	int result;

	printf("실수 2개를 입력해!\n");
	scanf_s("%lf %lf", &d1, &d2);
	result = (int)d1 * (int)d2;
	printf("두 값을 곱한 값(정수): %d\n", result);
}