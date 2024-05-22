//5 몸무게와 키를 입력하여 BMI(body mass index)를 구하고, 18미만이면 “저체중”, 18~25이면 “정상”, 25초과면 “과체중”을 출력하시오.
// (단, BMI = 몸무게/키2 , 몸무게:kg 단위, 키:m 단위)  
// (예) 몸무게 55kg,  키 1.65 m 라면 => BMI = 55/1.65 2 = 20.2
#include <stdio.h>
void main()
{
	double kg, cm, BMI;

	printf("몸무게와 키를 입력!\n");
	scanf_s("%lf %lf", &kg, &cm);
	BMI = kg / (cm * cm);
	if (BMI < 18.0) {
		printf("제체중\n");
	}
	else if (BMI <= 25.0) {
		printf("정상\n");
	}
	else if(BMI > 25.0){
		printf("과체중\n");
	}
}