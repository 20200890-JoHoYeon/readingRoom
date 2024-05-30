//1 자연수 하나를 입력 받아 그 수 이하의 7의 배수가 아닌 홀수의 합을 구하시오.
#include <stdio.h>
void main()
{
	int n, sum = 0;
	printf("자연수 하나 입력!\n");
	scanf_s("%d", &n);

	for (int i=1;i<=n;i+=2){
		if (i % 7 == 0) continue;
		sum += i;
	}
	printf("결과: %d",sum);
}