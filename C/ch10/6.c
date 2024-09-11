//다음 조건을 만족하도록 1에서 100까지의 하나의 난수를 저장하여 사용자가 이 값을 맞추는 프로그램을 작성하시오.
//함수 setNumber()에서 1에서 100까지의 하나의 난수를 발생하여 전역변수 number에 저장
//시스템이 정한 number를 사용자가 맞출 때까지 계속 진행
//사용자가 정답을 맞추지 못하는 경우는 다음과 같이 힌트를 주도록
//힌트를 주기 위하여 변수 min, max를 이용하며, 이 변수는 정적 외부변수로 선언
//함수는 main()과 함수 setNumber(), printHead(), printHigher(),printLower(), printAnswer()로 구성

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setNumber();//1에서 100까지의 하나의 난수를 발생하여 전역변수 number에 저장하는 함수
void printHead(int);//메인 타이틀 출력용 함수 (함수 1~100 사이)
void printHigher(int);//입력한 정수값이 큰 경우 호출할 함수
void printLower(int);//입력한 정수값이 작은 경우 호출할 함수
void printAnswer();//결과이자 정답인 전역변수 number를 보여주는 함수

int number;
static int min = 1, max = 100;

void main() {
    srand(time(NULL));
    setNumber();

    int n;
    printf("%d 에서 %d 까지의 하나의 정수가 결정되었습니다.\n이 정수를 맞추어 보세요? > ", min, max);
    scanf_s("%d", &n);
    
    while (n != number) {
        if (n > max && n < min) {
            printf("\n%d 에서 %d 까지의 수를 입력하십시오. > ", min, max);
            scanf_s("%d", &n);
            continue;
        }
        if (n < number) { 
            printHigher(n); 
            printHead(n); 
            scanf_s("%d", &n); 
        }
        else { 
            printLower(n); 
            printHead(n); 
            scanf_s("%d", &n); 
        }
    }
    printAnswer(n);
}

void setNumber() {
    number = rand() % 100 + 1;
}

void printHead(int n) {
    if (n > number) max--;
    else min++;
    printf("%d 에서 %d 사이의 정수를 다시 입력하세요. > ", min, max);
}

void printHigher(int n) {
    printf("\n 맞추어야 할 정수가 입력한 정수 %d 보다 큽니다.\n", n);
    min = n;
}

void printLower(int n) {
    printf("\n 맞추어야 할 정수가 입력한 정수 %d 보다 작습니다.\n", n);
    max = n;

}

void printAnswer() {
    printf("\n 축하합니다! 정답은 %d 입니다.\n", number);
}