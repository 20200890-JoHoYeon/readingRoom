//9. (보너스 문제) 10개의 수를 배열에 입력 받고, 선택정렬 또는 삽입정렬 방법으로 정렬하시오.

#include <stdio.h>
void main() {
    int arr[10], i, j, temp = 0, key = 0;
    //선택정렬 
    printf("[선택정렬]\n10개의 수를 입력해: ");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }


    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("선택정렬: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

  
    //삽입정렬
    printf("\n[삽입정렬]\n10개의 수를 입력해: ");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++) {
        key = arr[i+1];
        for (j = i; j > -1; j--) {
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
        }

        arr[j + 1] = key;
    }
    
    printf("삽입정렬: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);


}

