//2 첫 번째 입력 받은 정수부터 두 번째 입력 받은 정수까지의 합을 구하시오.
#include <stdio.h>
void main()
{
	int i, n, sum = 0;
	printf("정수 두개 입력!\n");
	scanf_s("%d %d", &i, &n);

	for (i; i <= n; i ++) {
		sum += i;
	}
	printf("결과: %d", sum);
}