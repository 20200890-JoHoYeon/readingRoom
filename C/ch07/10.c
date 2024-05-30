//1부터 n까지의 곱 중에서 10000을 넘지 않는 가장 큰 곱과 그 때의 n을 구하는 프로그램을 작성하시오.

#include <stdio.h>
void main()
{
    int i = 1, sum = 1;

    while (1)
    {
        sum *= i;
        
        if ((sum *i) > 10000) {
            break;
        }
        i++;
    }
    printf("1부터 n까지의 곱 중에서 10000을 넘지 않는 가장 큰 곱은?\n1부터 %d까지 곱이 %d입니다.\n", i, sum); 
}

