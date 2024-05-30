//3 서기 1년부터 입력받은 해까지의 윤년 개수를 구하시오.
#include <stdio.h>
void main()
{
	int y, sum=0;
	printf("년도 입력!\n");
	scanf_s("%d", &y);

	for (int i = 1; i <= y; i++) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
			sum ++;
			
		}	
	}
	printf("윤년 개수 결과: %d\n", sum);
}

