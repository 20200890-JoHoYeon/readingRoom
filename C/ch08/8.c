//8. 현금을 입력 받아 큰 단위 화폐 위주로 각 단위의 개수를 구하시오. 화폐단위를 배열에 저장하여 반복문을 쓰시오.
// (예: 108,000원 => 50000원권 2개, 5000원권 1개, 1000원권 3개)

#include <stdio.h>
void main() {
    int arr[4] = { 50000,10000,5000,1000 }, money, result[4] = {0};

    printf("현금을 입력해: ");
    scanf_s("%d", &money);
    printf("%d원 => ", money);

    for (int i = 0; i < 4; i++) {
        result[i] = money / arr[i];
        money = money % arr[i];
        
        printf("%d원권 %d개, ", arr[i], result[i]);
        
    }
}