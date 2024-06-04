//1. 5개의 수를 배열에 입력 받은 후, 끝 원소부터 거꾸로 출력해보시오.
#include <stdio.h>
void main() {
	int arr[5];

	printf("5개의 숫자를 입력해: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%d",&arr[i]);

	for (int i = 4; i >= 0; i--)
		printf("%d ", arr[i]);

}