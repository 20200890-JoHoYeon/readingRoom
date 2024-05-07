//1번 화씨 90도는 섭씨 몇 도인지 구하시오(단, C = (F -32)/1.8 )
#include <stdio.h>

void main() 
{
	int f = 90;
	double c;

	c = (f - 32) / 1.8;
	
	printf("화씨 %d도 = 섭씨 %lf도\n", f, c);
}