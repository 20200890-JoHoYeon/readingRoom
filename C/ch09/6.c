//6. 배열의 각 원소값을 거꾸로 바꿔주는 함수를 만들고, 호출해 보시오.
// ({1,4,7,5} -> {5,7,4,1} 예:void rev_arr(int aa[], int sz))

#include <stdio.h>

void rev_arr(int ary[], int size);

void main()
{
	int ary[4] = { 1,4,7,5 }, size;
	size = sizeof(ary) / sizeof(int);

	rev_arr(ary, size);

}
void rev_arr(int ary[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", ary[i]);
	}
	printf(" -> ");
	for (i = size-1; i >= 0; i--) {
		printf("%d ", ary[i]);
	}
}
