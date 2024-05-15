//밑원의 반지름과 높이를 입력 받아 원기둥의 부피를 구하시오.(단, 
//인자있는매크로 VOLUME(x, y)을 만드시오.반지름이 x이고 높이 y인 원기둥의 부피)
#include <stdio.h>
#define VOLUME(x,y) (3.14*(x)*(x)*(y))

void main() 
{
	double r, h, bupi;
	
	printf("밑원의 반지름과 높이를 입력해!\n");
	scanf_s("%lf %lf", &r, &h);
	bupi = VOLUME(r, h); // (3.14*(r)*(r)*(h))
	printf("부피: %lf\n", bupi);
}