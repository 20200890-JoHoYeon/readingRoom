//3. 10개의 값을 입력 받아 일차원 배열에 저장한 후, 
// 그 값들 중에 최댓값을 찾아 출력하시오.

#include <stdio.h>
void main() {
	int arr[10] = { 0 }, max;

	printf("10개의 숫자를 입력해: ");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	max = arr[0];//첫번째로 입력한 수를 값으로 가지는 것이 안전함 0으로 하면 0 이하의 수는 오류가 생김
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("최댓값: %d ", max);

}