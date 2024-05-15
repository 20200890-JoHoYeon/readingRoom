//입력한 거스름돈(만원 미만, 최소 단위 백원)을 큰 돈 단위부터 개수를 말하시오.
//(가령 9700원이면 5000원 1개, 1000원 4개, 500원 1개, 100원 2개)
#include <stdio.h>
void main()
{
	int money, m1, m2, m3, m4;
	printf("거스름돈 입력해!\n");
	scanf_s("%d", &money);

	m1 = money/5000;
	money = money% 5000;
	m2 = money / 1000;
	money = money % 1000;
	m3 = money / 500;
	money = money % 500;
	m4 = money / 100;
	money = money % 100;
	printf("5000원 %d개, 1000원 %d개, 500원 %d개, 100원 %d개 ", m1,m2,m3,m4);
}