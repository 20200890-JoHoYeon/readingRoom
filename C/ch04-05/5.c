//몸무게와 키를 입력 받아 BMI(body mass index)를 계산하시오.
//(단, BMI=몸무게/키2, 몸무게:kg 단위, 키:m 단위) 
//(예) 몸무게 55kg,  키 165 cm 라면 => BMI = 55/1.65 2 = 20.2
/*
#include <stdio.h>
#define BMI(x,y) ((x)/((y)*(y))) 

void main()
{
	double kg, cm, result;

	printf("몸무게랑 키 입력!\n");
	scanf_s("%lf %lf", &kg, &cm);
	result = BMI(kg, cm);
	printf("BMI: %0.1lf\n", result);
}
*/

#include <stdio.h>
void main() {
	double kg, m, result;
	printf("몸무게랑 키 입력해!");
	scanf_s("%lf %lf",&kg, &m);
	result = kg / (m * m);
	printf("BMI:%.1lf", result);
}