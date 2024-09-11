//1 전역변수를 하나 선언하고 그 전역변수 값만큼 “Hello”를 여러 번 출력하는 함수를 만드시오. 
// main()에서 그 전역변수 값을 입력한 후, 함수호출하시오. 
#include <stdio.h>
int NUM = 5;//전역변수 선언 (기본적으로 선언 시 0으로 초기화 되지만 여기선 5로 선언)
void prn_hello();

void main() 
{
	prn_hello();
}

void prn_hello() {
	for (int i = 0; i < NUM; i++)
	{
		puts("Hello");
	}
}