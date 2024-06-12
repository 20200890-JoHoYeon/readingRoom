//7. 난수를 이용하여 1에서 45 사이의 서로 다른 숫자 6개를 발생시켜 출력하시오.
// (중복제거하고, 라이브러리 rand(), srand(), time() 사용)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void main()
{
	srand((long)time(NULL));
	int arr[6] = {0};
	printf("1 ~ %d 사이의 난수 6개: \n", MAX);
	for (int i = 0; i < 6; i++) {
		int temp = rand() % MAX + 1;
		int toggle = 0;
		for (int j = 0; j < i; j++) {
			if (arr[j] == temp) {
				toggle = 1;
				break;
			}
		}
		if (!toggle) {
			arr[i] = temp;
		}
		else {
			i--;
		}
	}
	printf("결과: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
}