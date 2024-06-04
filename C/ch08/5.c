//5. 10개의 수를 배열에 입력 받고, 버블정렬 방법으로 정렬하시오.

#include <stdio.h>
void main() {
	int arr[10], i, j;

	printf("10개의 숫자를 입력해: ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	for (i = 0; i < 9; i++) {
		for(j = 0; j < 9-i; j++){
			if (arr[j] > arr[j+1]) {
				int save = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = save;
			}
		}
		/*
		printf("%d 단계:",i);
		for (j = 0; j < 10; j++) {
			printf("%d ", arr[j]);
		}
		puts("");
		*/
	}
	printf("버블정렬: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}

