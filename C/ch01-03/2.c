//원주율(3.14)을 매크로상수로 선언하고, 반지름(6400Km)은 cons 상수로 선언하여 지구의 둘레길이를 구하시오. (단, 원주의 크기 = 2*π*r)
#include <stdio.h>
#define PI 3.14
void main() 
{
	const int R = 6400;
	double dule;

	dule = 2 * PI * R;
	printf("지구의 둘레: %lfKm\n", dule);
}