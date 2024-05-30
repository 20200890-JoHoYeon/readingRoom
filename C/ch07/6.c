/*6 for loop를 이용하여 다음처럼 출력하게 하시오.
1234567
234567
...
7

97531
9753
...
9
*/

#include <stdio.h>
void main()
{
	int i,j;


	for (i = 1; i <= 7;i++) {
		for (j = i; j <= 7; j++) {
			printf("%d", j);
		}
		puts("");
	}
	puts("");

	for (i = 1; i <=9; i+=2) {
		for (j = 9; j >= i; j-=2) {
			printf("%d", j);
		}
		puts("");
	}
}