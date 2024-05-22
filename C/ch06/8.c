//8 음식값을 입력 받아 손님 3명의 ‘n분의 1’ 각 지불액을 구하시오.
//단 2명은 1000원 단위로만 부과하고 사람별로 금액 차이가 가장 적도록(1000원 미만) 분배하시오.
//(예)10500원이면 = > (3000원, 3500원, 4000원) 으로 분배
#include <stdio.h>
void main()
{
	int pay, remain, a, b, c;

	printf("음식값을 입력!\n");
	scanf_s("%d", &pay);
	remain = pay / 3;

	
	a = (remain / 1000)*1000 ;
	b = ((remain + 999) / 1000) * 1000; 
	c = pay - (a + b);

	if (b > c) {
		int temp = b;
		b = c;
		c = temp;
	}
	
	printf("음식값: %d원, %d원, %d원 \n",a,b,c);
	
}