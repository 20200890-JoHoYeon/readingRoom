//2. 크기가 3*4인 이차원배열을 만들어, 임의의 값(rand() 이용)으로 초기화 한 후 평균을 구하시오. 
//(단, int rand() : 0~32767 리턴, stdlib.h 필요)

#include <stdio.h>
#include <stdlib.h>

void main() 
{
	int arr[3][4], sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = rand();
			sum += arr[i][j];
		}
	}	
	printf("평균값은: %.2f\n", sum / 12.0);
}