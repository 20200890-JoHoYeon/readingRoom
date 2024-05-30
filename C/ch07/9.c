//1 (보너스 문제) 입력한 정수 이상의 소수(prime number)를 하나 출력하고, 반복하여 다음 입력을 기다리게 하시오. 0 또는 음수를 입력하면 종료하시오.
//(9입력하면 11출력, 13입력하면 13출력, …, 0입력하면 종료!)

#include <stdio.h>
void main()
{
	int i, ii, num;
	printf("정수를 입력해줘!\n");
	scanf_s("%d", &num);
	for(ii = num; num > 0; ii++){
		for (i = 2; i < ii; i++) {
			if (ii % i == 0) {			
				break;
			}
		}
	
		if (i == ii) {
			printf("%d \n", ii);
			break;
		}
	}

}