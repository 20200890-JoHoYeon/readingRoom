//4 오늘 10원, 내일 20원, 모레 40원, … 매일 두 배씩 저금통에 모을 때 모두 합한 총액이 1억원이 넘는 날은 몇 일째인지 코딩해 보시오. 
#include <stdio.h>
void main()
{
	int i = 10, day = 0;
	/*
	for (int i =10; ; i*=2) {
		sum += i;
		day++;
		if (sum >= 100000000) break;
	}
	*/
	for (i = 10; i < 100000000; i *= 2) {
		day++;
	}
	printf("날짜: %d일, 금액: %d\n", day, i);
	/*
	while (i < 100000000) {
		i *= 2;
		day++;
	}
	*/

}