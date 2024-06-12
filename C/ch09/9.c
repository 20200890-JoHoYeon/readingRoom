//9.(보너스 문제)로또 645에서 1등 당첨 확률을 실험적으로 계산해 보시오.
// (자동발행한 로또 10억 세트 중 몇 세트 당첨되는 지 실행시켜 결과를 출력하시오. 
// 실행하면 15분 정도 걸림)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_SETS 1000000000  

// 함수 선언
void Lotto_Maker(int numbers[]);
int calculator(int a[], int b[]);

void main() {
    srand((long)time(NULL)); 

    int answer[] = { 1, 2, 3, 4, 5, 6 };
    int winning = 0;

    for (int i = 0; i < LOTTO_SETS; i++) {
        int temp[6];
        Lotto_Maker(temp);
        if (calculator(temp, answer) == 1) {
            winning++;  
        }
    }

    double probability = (double)winning / LOTTO_SETS;

    printf("로또 1등 당첨 확률: %.10lf\n", probability);
}

void Lotto_Maker(int numbers[]) {
    for (int i = 0; i < 6; i++) {
        numbers[i] = rand() % 45 + 1;
    }
}

int calculator(int a[], int b[]) {
    for (int i = 0; i < 6; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
