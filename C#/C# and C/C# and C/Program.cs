// C 언어 예제 코드 모음

/*
// 1. Hello, World
// 가장 기본적인 C 프로그램으로, "Hello, World!"를 출력함
#include <stdio.h>

int main()
{
    printf("Hello, World!\n"); // 콘솔에 문자열 출력
    return 0; // 프로그램 종료
}

// 2. 문자열 처리
// C에서 문자열은 문자(char)의 배열로 처리되며, 문자열 길이를 구할 땐 strlen 함수 사용
#include <string.h>

int string_example()
{
    char name[10] = "Bob"; // 문자 배열로 문자열 선언
    printf("Name length: %lu\n", strlen(name)); // 문자열 길이 출력
    return 0;
}

// 3. 배열과 반복문
// C에서 배열은 고정 길이를 가지며, 반복문을 통해 순회함
int array_example()
{
    int nums[] = { 1, 2, 3 }; // 정수형 배열 초기화
    for (int i = 0; i < 3; i++)
    { // 배열 요소 수만큼 반복
        printf("%d\n", nums[i]); // 각 요소 출력
    }
    return 0;
}

// 4. 동적 메모리와 해제
// C에서는 malloc으로 동적 메모리를 할당하고, 사용 후 free로 반드시 해제해야 함
#include <stdlib.h>

int malloc_example()
{
    int* p = malloc(sizeof(int) * 3); // int 3개 크기의 메모리 동적 할당
    p[0] = 10; // 첫 번째 요소에 값 대입
    // ...
    free(p); // 메모리 해제 (안 하면 메모리 누수 발생)
    return 0;
}

// 5. 클래스는 없음 – 객체지향 불가
// C는 절차지향 언어이며 클래스, 메서드, 상속 등 객체지향 개념을 지원하지 않음
// 대신 struct로 데이터 구조를 정의할 수 있지만, 기능적 동작(메서드)은 포함 불가

*/

// C# 예제 코드 모음

using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // 1. Hello, World
        Console.WriteLine("Hello, World!");

        // 2. 문자열 처리
        string name = "Bob";
        Console.WriteLine($"Name length: {name.Length}");
        Console.WriteLine(name);

        // C는 문자열을 배열로 다뤄야 하지만 C#은 string 클래스로 편리하게 사용 가능

        // 3. 배열과 반복문
        int[] nums = { 1, 2, 3 };
        foreach (int num in nums)
        {
            Console.WriteLine(num);
        }
        // foreach는 컬렉션을 편리하게 순회할 수 있는 C#의 문법

        // 4. 동적 메모리와 해제
        int[] p = new int[3];
        p[0] = 10;
        // C#에서는 new로 할당하고 GC(Garbage Collector)가 자동 해제해줌

        // 5. 클래스 및 객체지향 예시
        Person person = new Person();
        person.Name = "Alice";
        person.Greet();
        // 클래스, 메서드, 속성 등 객체지향 기능이 내장되어 있음



        Point a = new Point();
        a.X = 5;

        Point b = a;  // 값 복사
        b.X = 10;

        Console.WriteLine(a.X);  // 출력: 5 (a는 영향 없음)
        Console.WriteLine(b.X);  // 출력: 10

        // 구조체 a를 b에 대입하면, 값이 통째로 복사됨
        // b.X를 바꿔도 a.X는 그대로

        PointClass c = new PointClass();
        c.X = 5;

        PointClass d = c;  // 참조 복사
        d.X = 10;

        Console.WriteLine(c.X);  // 출력: 10 (같은 객체)
        Console.WriteLine(d.X);  // 출력: 10

        // d는 c와 같은 객체를 가리키므로, d.X를 바꾸면 c.X도 바뀜
    }

}

class Person
{
    public string Name;

    public void Greet()
    {
        Console.WriteLine($"Hi, I'm {Name}");
    }
}

// 요약 정리
// 프로그래밍 방식: C는 절차지향, C#은 객체지향 중심
// 메모리 관리: C는 수동 관리(malloc/free), C#은 자동 관리(GC)
// 문자열: C는 char 배열, C#은 string 클래스
// 예외 처리: C는 기본 없음, C#은 try-catch 사용 가능
// 포인터 사용: C는 자유롭게 사용, C#은 unsafe 블록 내 제한적으로 사용




// 값 형식 vs 참조 형식 개념 정리

// 구분      값 형식 (Value Type)         참조 형식 (Reference Type)
// 저장 위치   스택(Stack)에 저장됨           힙(Heap)에 저장됨
// 변수에 저장된 것   실제 값 자체               값이 저장된 주소 (참조)
// 복사 시 동작    값을 그대로 복사함           주소를 복사 (같은 객체 참조)
// 대표 예시     int, float, bool, struct     class, object, string, 배열

// 예시: 값 형식인 구조체
struct Point
{
    public int X;
    public int Y;
}


// 예시: 참조 형식인 클래스
class PointClass
{
    public int X;
    public int Y;
}


// 요약
// 구조체는 값 형식이라서 데이터를 넘기거나 할당하면 복사됨 → 독립적인 사본
// 클래스는 참조 형식이라서 주소를 공유함 → 같은 객체를 가리킴

// struct는 작고 간단한 데이터에 적합 (예: 좌표, 색상, 벡터)
// class는 무겁고 복잡한 객체에 적합 (예: 게임 캐릭터, 사용자 정보 등)




// 예시 1: 사용자 정의 기본 생성자

// 클래스는 가능
class Person2
{
    public string Name;
    public int Age;

    public Person2()
    {
        Name = "Unknown";
        Age = -1;
    }
}

//Person2 p = new Person2();
//Console.WriteLine($"{p.Name}, {p.Age}");  // 출력: Unknown, -1

// 구조체는 불가능 (컴파일 에러 발생)
struct Point2
{
    public int X;
    public int Y;

    // 구조체는 기본 생성자를 직접 정의할 수 없음
    // public Point() {
    //     X = 0;
    //     Y = 0;
    // }
}

// 구조체는 기본 생성자 직접 만들 수 없어서 무조건 컴파일러가 자동 제공하는 걸 써야 함


// 예시 2: new 없이 사용하기

// 클래스는 new 없이 사용 불가
//Person p2;               // 선언만 하면 참조는 null 상태
// Console.WriteLine(p2.Name);  // 컴파일 에러: 사용 전 초기화 필요

// 구조체는 new 없이도 사용 가능 (단, 모든 필드 수동 초기화 필요)
//Point pt;
//pt.X = 10;
//pt.Y = 20;
//Console.WriteLine($"{pt.X}, {pt.Y}");  // 출력: 10, 20


// 예시 3: 모든 필드 자동 초기화 여부

//Point2 pt2 = new Point2();              // 구조체는 기본값으로 자동 초기화됨
//Console.WriteLine(pt2.X);            // 출력: 0

//Person2 p3 = new Person2();            // 클래스는 참조형의 기본값으로 초기화됨
//Console.WriteLine(p3.Name);          // 출력: null

// 구조체는 필드가 자동으로 초기화(기본값) 되지만,
// 클래스는 참조형이라 null일 수 있음
