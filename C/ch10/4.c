/*
4 문자열 인자에서 자음(consonant)만 골라, 자음으로만 된 문자열을 리턴해주는 함수를 만들고 호출해 보시오.(문자열은 char 배열에 저장되며 끝 문자 뒤에 널캐릭터(‘\0’ 즉 0)를 저장해서 문자열 끝을 나타냄.
    (예) char str[10] = “abcdefghi“; )
*/

#include <stdio.h> 
char* conSo(char a[]);//함수 정의

void main()
{
    char str[10] = "abcdefghi";

    char* p;//포인터 변수 
    p = conSo(str);//리턴되어온 c배열의 주소값이 담긴다.
    int arrLength = sizeof(p) / sizeof(char);//c배열의 사이즈 구하는 법 (포인터 변수로 가져온 주소값을 통해)
    for (int i = 0; i < arrLength; i++) {
        printf("%c ", p[i]);
    }
}

char* conSo(char a[])
{//정수 변수의 주소를 리턴하는 함수
    static char c[100];//주소가 리턴되면 값이 이상하게 나오기에 함수가 끝나더라도 생명주기를 스테틱을 통해 늘려서 함수 밖에서 주소값을 통해 출력해도 불러올 수 있도록 선언
    //모음이 아닌 것을 저장 = a,e,i,o,u
    for (int i = 0,j=0; i < 10; i++) {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
            c[j] = a[i];
            j++;
        }
    }
    return c;//c배열 리턴 &c[0]; // 0번방의 주소는 무엇인가
}