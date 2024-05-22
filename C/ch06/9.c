//표준입력으로 받은 두 실수 x, y의 다음 조건에 연산을 수행하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>
void main()
{
	double x, y, result;

	printf("두 실수 입력 >> ");
	scanf_s("%lf %lf", &x, &y);
    if (x > 0 && y > 0) {
        result = x + y;
    }
    else if (x > 0 && y <= 0) {
        result = x - y;
    }
    else if (x <= 0 && y > 0) {
        result = -x + y;
    }
    else {
        result = -x - y;
    }

	printf("결과값: %lf\n", result);
}