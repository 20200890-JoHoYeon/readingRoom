//3번 1000만원을 예탁하여 2년 후 받게 되는 총액을 계산하시오. (연이율은 4% 복리)
#include <stdio.h>

void main() 
{
	int money  = 10000000;
	int result;
	result = money + money * 0.04;
	result = result + result * 0.04;
	//total = (money*1.04) * 1.04
	printf("%d만원을 예탁하여 2년 후 받게 되는 총액: %d원\n", money, result);
}