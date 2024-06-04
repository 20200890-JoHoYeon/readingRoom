//6. 크기가 4*3인 이차원배열을 만들어, 임의의 값(rand() 이용)으로 초기화 한 후 각 열(column)별 합계를 구하시오. 
#include <stdio.h>
#include <stdlib.h>
// ex
// 4 3 2
// 5 2 6
// 7 4 2
// 6 4 3

void main()
{
	int arr[4][3] = {0}, col[3] = { 0 }, i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			arr[j][i] = rand();
			col[i] += arr[j][i];			
		}
	}

	for (i = 0;i < 3; i++){
		printf("%d 열 합계: %d \n", i + 1, col[i]);
	}
}