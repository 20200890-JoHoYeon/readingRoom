//4. 자연수를 1개 입력 받아, 한 숫자씩 영어로 바꾸어 출력하시오.
//(만일 203 이면, two zero three)

#include <stdio.h>
void main() {
	int n, arr[20] = {0};

	printf("1개의 자연수를 입력해: \n");
	scanf_s("%d", &n);
	int i = 0;
	while (-1) {
		arr[i] = n % 10;
		n /= 10;
		if (n == 0) break;
		i++;
	}
	for (int j = i; j >= 0; j--) {
		if (arr[j] == 0) printf("zero ");
		if (arr[j] == 1) printf("one ");
		if (arr[j] == 2) printf("two ");
		if (arr[j] == 3) printf("three ");
		if (arr[j] == 4) printf("four ");
		if (arr[j] == 5) printf("five ");
		if (arr[j] == 6) printf("six ");
		if (arr[j] == 7) printf("seven ");
		if (arr[j] == 8) printf("eight ");
		if (arr[j] == 9) printf("nine ");
	}
}