//x의 y승을 구하는 함수를 재귀적으로 만들고, 
//6의 0승에서 10승까지 출력하는 프로그램을 작성하시오.

#include <stdio.h> 
#include <math.h>

int my_pow(int x, int y);

void main()
{
	printf("6의 0승에서 10승까지 구하는 프로그램입니다.\n");
	my_pow(6, 10);
}
int my_pow(int x, int y)
{
	if (y < 0)
		return 0;
	else {
		my_pow(x, y - 1);
		printf("%d의 %2.d승: %10.0lf\n", x, y, pow(x,y));
	}
}