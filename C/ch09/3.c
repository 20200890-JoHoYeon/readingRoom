//3. 입력된 3수 중 가장 큰 값과 가장 작은 값을 구하시오.(큰 값 구해서 리턴하는 함수와, 작은 값 구해서 리턴하는 함수를 각각 구현)
#include <stdio.h>

int MAX(int a, int b, int c);
int MIN(int a, int b, int c);

void main()
{
	int a, b, c, max, mim;
	printf("세 수 입력!");
	scanf_s("%d %d %d", &a, &b, &c);
	max = MAX(a, b, c);
	mim = MIN(a, b, c);
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", mim);
}
int MAX(int a, int b, int c)
{
	int result = 0;
	if (a < b) result = b;
	else result = a;
	
	if (result < c) result = c;

	return result;
}
int MIN(int a, int b, int c)
{
	int result = 0;
	if (a > b) result = b;
	else result = a;

	if (result > c) result = c;

	return result;
}
