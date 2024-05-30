//연습: n Factorial 구하기.(for이용) 3! = 1*2*3 (for)
/*
#include <stdio.h>
void main() 
{
	int n, i, mul=1;

	printf("n 값 입력!\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		mul *= i;
	}
	printf("결과 값: %d", mul);
}
*/

//연습: n Factorial 구하기.(for이용) 3! = 1*2*3 (while)
#include <stdio.h>
void main()
{
	int n, i=1, mul = 1;

	printf("n 값 입력!\n");
	scanf_s("%d", &n);

	while  (i <= n) {
		mul *= i;
		i++;
	}
	printf("결과 값: %d", mul);
}