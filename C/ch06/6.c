//6 지하철 이용거리를 입력 받아 요금을 계산하시오.
// (10Km 이내: 1400원, 10~50Km : 5Km마다 100원 추가, 50Km 초과시: 8Km마다 100원 추가; 
// (예) 11Km면 1400+100 = 1500원, 15Km면 1400+100 = 1500원) 
#include <stdio.h>
void main()
{
	int km, result=1400;

	printf("지하철 이용거리를 입력!\n");
	scanf_s("%d", &km);
	
	if (km < 10) {
		printf("%d\n",result);
	}
	else if (km <= 50) {
		result += 100 * (km % 5 != 0 ? (km - 10) / 5 + 1 :(km - 10) / 5);
		printf("%d\n", result);
	}
	else if (km > 50) {
		result += 100 * (km % 8 != 0 ? (km - 10) / 8 + 1 : (km - 10) / 8);
		printf("%d\n", result);
	}
}