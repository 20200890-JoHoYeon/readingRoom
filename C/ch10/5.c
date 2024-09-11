/*
5 함수(예를 들어 foo() 함수) 자신이 몇 번 호출되었는지
리턴해주는 함수를 만들고 여러 번 호출하여 검증해보시오.
*/

#include<stdio.h>

int foo();

void main() 
{
	int num;
	printf("함수를 호출할 횟수를 입력해!: ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("함수 호출: %d 번\n", foo());
	}
}
int foo() 
{		
	static int cnt; //전역변수를 사용해도 되지만 정적 지역변수를 사용하는 것이 효율적인 코드
	cnt+= 1;
	return(cnt);
}