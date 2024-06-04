//7. 10개의 수를 배열에 입력 받고, 그 중 소수(prime number)를 모두 출력하시오.

#include <stdio.h>
void main() {
	int arr[10], con = 0;

	printf("10개의 숫자를 입력해: ");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < 10; i++) {
        con = 1;
        if (arr[i] <= 1) {
            con = 0;
        }
        else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    con = 0;
                    break;
                }
            }
        }
        if (con) 
            printf("소수: %d, ", arr[i]);

	}
}
