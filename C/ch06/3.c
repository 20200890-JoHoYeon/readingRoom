//3 연도를 입력 받아 윤년인지 아닌지 알려주기
//(4의 배수이고 100의 배수 아니면 윤년임. 
// 단 400의 배수이면 무조건 윤년임)
#include <stdio.h>
void main()
{
	int y;

	printf("년도를 입력!\n");
	scanf_s("%d", &y);
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		printf("%d년은 윤년입니다.\n", y);
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", y);
	}
}