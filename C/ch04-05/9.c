//표준입력으로 두 정수를 입력 받아 큰 수를 작은 수로 나눈 몫과 나머지를 각각 출력하는 프로그램을 작성하시오.
#include <stdio.h>
void main() 
{
	int a, b;

	printf("임의의 정수 입력1 : "); 
	scanf_s("%d", &a);
	printf("임의의 정수 입력2 : ");
	scanf_s("%d", &b);

	printf("몫은 %d이고 나머지는 %d 입니다.", a > b ? a / b : b / a, a > b ? a % b : b % a);
}
