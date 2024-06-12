//2. a(실수)의 b(양의 정수)승을 해 주는 함수를 직접 만들고, 호출해 보시오.
#include <stdio.h>

int hpow(int a, int b);

void main()
{	
	int a, b, c;
	printf("a(실수)의 b(양의 정수)승할 2 수 입력!");
	scanf_s("%d %d", &a, &b);
	c = hpow(a, b);
	printf("결과: %d\n", c);
}
int hpow(int a, int b)
{
	int result = 1;
	for (int i = 1; i <= b; i++) {
		result *= a;
	}
	return result;
}