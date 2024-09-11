//2.c 파일에서 사용하는 함수 정의
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
extern int Garr[10];//2.c의 전역 배열 Garr[10]을 사용해야함

void init_arr()//초기화 함수
{
	srand(time(NULL));//랜덤 시드 값 초기화
	for (int i = 0; i < 10; i++) {
		Garr[i] = rand();// 10개의 랜덤값으로 초기화하는 반복문
	}
}
void print_sum()
{
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += Garr[i];// 10개의 배열값의 합계
	}
	printf("sum=%d", sum);
}
