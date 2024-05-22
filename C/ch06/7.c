//7 상속액을 입력 받아 상속세 계산하기.
//(단, 1억 원까지는 10 %, 1억~5억 원 20 %, 5억~10억 원 30 %, 10억~30억 원 40 %, 30억 원 이상 분은 50 % 임.
//(예)1억 3천만원이면 상속세는 1억 * 10 % +3천만 * 20 % = 1600 만원임)
#include <stdio.h>
void main()
{
	double money;
	printf("상속액을 입력하세요: ");
	scanf_s("%lf", &money);

	double tax = 0;

	if (money <= 1e8) {
		tax = money * 0.1;
	}
	else if (money <= 5e8) {
		tax = 1e8 * 0.1 + (money - 1e8) * 0.2;
	}
	else if (money <= 10e8) {
		tax = 1e8 * 0.1 + 4e8 * 0.2 + (money - 5e8) * 0.3;
	}
	else if (money <= 30e8) {
		tax = 1e8 * 0.1 + 4e8 * 0.2 + 5e8 * 0.3 + (money - 10e8) * 0.4;
	}
	else {
		tax = 1e8 * 0.1 + 4e8 * 0.2 + 5e8 * 0.3 + 20e8 * 0.4 + (money - 30e8) * 0.5;
	}

	printf("상속세는 %.0f만원\n", tax);
}