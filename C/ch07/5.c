//5 10~19구구단표를 만들어보시오.(10단부터 19단까지)

#include <stdio.h>
void main()
{
	int i, j;


	for (i = 10; i <= 19; i++) {
		printf("\n\n======================== %d 단 ========================\n\n", i);
		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %d, ", i, j, i * j);
			if(j==5) puts("");
		}
		
	}
}