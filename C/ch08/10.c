//배열을 사용하여 98.56, 78.62, 78.69, 89.32, 95.29를 초기화하여 출력하고 
//배열의 총합과 평균을 구하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main() {
	double arr[5] = { 98.56, 78.62, 78.69, 89.32, 95.29 }, sum = 0.0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
		printf("%.2f ", arr[i]);
	}
	printf("\n배열의 합은 %.3f이며 평균은 %.3f입니다.", sum, sum / 5.0);
}