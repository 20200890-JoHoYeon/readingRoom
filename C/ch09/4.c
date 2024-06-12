//4. 입력된 수의 1.1승, 2.2승, 3.3승,…, 9.9승을 출력하시오(라이브러리 함수 pow() 사용)
#include <stdio.h>
#include <math.h>

void main()
{
	int a;
	printf("수 하나 입력!");
	scanf_s("%d", &a);

	for(int i=1.1; i<=9.9; i+=1.1)
	printf("결과: %d승: %.0lf\n",i, pow((double)a, (double)i));
}
