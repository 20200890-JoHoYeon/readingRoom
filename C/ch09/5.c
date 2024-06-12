//5. 배열을 인자로 받아 최대값을 가진 원소를 리턴 해주는 함수를 만들고, 이 함수를 이용하여 배열에 입력된 여러 수 중 최대값을 출력하시오.
#include <stdio.h>

int MAX(int ary[], int size);

void main()
{
	int ary[5] = {2,82,67,4,140}, size, max;
	size = sizeof(ary) / sizeof(int);
	max = MAX(ary,size);
	printf("최댓값: %d\n", max);

}
int MAX(int ary[], int size)
{
	int i, result = ary[0];
	for (i = 0; i < size; i++) {
		if (ary[i] > result) result = ary[i];
	}
	return result;
}
