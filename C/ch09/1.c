//1. √1 + √ 2 + … + √n 을 계산하시오.(라이브러리 함수 sqrt()이용)
#include <stdio.h>
#include <math.h>


void main() 
{
	int n;
	double sum=0.0;
	printf("n 값 입력!");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += sqrt((double)i);
	}
	printf("결과: %lf\n",sum);
}