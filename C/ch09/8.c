//8. 20억 이상의 소수(prime number) 10개 찾기.
// (소수인지 알려주는 함수를 구현할 것 예: int is_prime(int) )
/*
#include <stdio.h>

int is_prime(int);

void main()
{
    int ary[10] = { 0 }, a = 2000000000, j = 0;
    while (j < 10) {
        if (is_prime(a) == 1) {
            ary[j] = a;
            j++;
        }
        a++;
    }
    printf("결과: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ary[i]);
    }
}

int is_prime(int a)
{
    if (a <= 1) return 0;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}
*/
/*
//교수님 풀이: 20억 이상 소수 10개 찾기 (함수로 구현)
#include <stdio.h>
int is_prime(int num);//소수면 1, 아니면 0 (보틍 is가 붙으면 0 아니면 1을 리턴함)

void main() 
{
    int count = 0;//10개를 카운트할 변수를 만든다
    for (int i = 2000000000; ; i++) {//20억부터 1씩 증가하며 무한반복
        if (is_prime(i)) {//소수함수에 넣었는데 결과가 참일 때
            count++;//카운터 1증가
            printf("%d ", i);//소수출력
            if (count >= 10) break;//10개면 반복문을 빠져나옴
        }
    }
}

int is_prime(int num)
{
    for (int i = 2; i < num; i++){
        if (num % i == 0) return 0; //나누어 떨어질 때
    }
    return 1;
}
*/

//교수님 풀이: 20억 이상 소수 10개 찾기 (함수 없이 구현)
#include <stdio.h>

void main()
{   
    int count = 0,i,j;//10개를 카운트할 변수를 만든다
    for (i = 2000000000; ; i++) {//20억부터 1씩 증가하며 무한반복
        for (j = 2; j < i; j++) {
            if (i % j == 0) break;
        }
        if (j == i) {
            count++;//카운터 1증가
            printf("%d ", i);//소수출력
            if (count >= 10) break;//10개면 반복문을 빠져나옴
        }
    }
}
