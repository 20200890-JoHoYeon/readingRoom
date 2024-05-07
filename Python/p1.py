#1주차

#< 1 >
#문자데이터는 작은따옴표('')와 큰 따옴표("")로 묶어준다.
#print() 함수 (function) 파이썬 쉘에 자료를 출력하는 작업에 사용
# + 연결연산자
# * 문자열에서 문자열을 지정된 수 만큼 반복
#한줄 주석 : 샾(#)
# 여러줄 주석 : 큰 따옴표 3개, 작은 따옴표 3개
''' 여러줄
주석 '''
a="hello"
b='world'
c="안녕"
d='하세요'

print(a)
print(b)

print(a+b)
print(c+d)
print('파이썬'+'언어 :'+13 * '=')

#< 2 >
#파이썬 정수, 실수
a=10
c=12.34656

print(a)
print(type(a))
print(c)
print(type(c))

#< 3 >
#연산자
#+,-,*,/,//(몫), %(나머지), **(제곱근)

a=10
b=5

print(a+b)
print(a-b)
print(a*b)
print(a/b)  #결과값 실습 2.0
print(a//b) #정수값 2
print(a%b)
print(a**3)

#< 4 >
#345672원이 10000원이 몇장, 10000원이 계산된 후 5000원이 몇장,
#5000원이 계산된후 1000원이 몇장, 500인 몇개, 100원이 몇개

'''
345672
10000원 : 34
5000원 : 1
1000원 : 0
500원 : 1
100원 : 1
72원
'''

mon=345672
mod=mon//10000
print('10000원 : ',mod)
mon=mon%10000
mod=mon//5000
print('5000원 : ',mod)
mon=mon%5000
mod=mon//1000
print('1000원 : ',mod)
mon=mon%1000
mod=mon//500
print('500원 : ',mod)
mon=mon%500
mod=mon//100
print('100원 : ',mod)
mon=mon%100
mod=mon//1
print(mod,'원')

#< 5 >
'''
식별자(identifiers)
-변수, 함수와 클래스 이름 등 프로그래머가 이름을 짓는 단어
-식별자를 구성하는 문자
-영문자(한글도 가능)와 숫자 그리고 _를 사용
-문자는 대소문자의 영문자(a, b, c, A, B, ...), 숫자(0, 1, 2, ...) 그리고 _ 로 구성
대소문자는 구별, 한글도 가능
- 숫자는 맨 앞에 올 수 없다. 그러므로 영문자로 시작
- import, True, False 등과 같은 키워드는 사용 불가
'''
# int() 정수변환
# str() 문자열 변환
# divmod() 나눈몫과 나머지 나열
# eval() 수식 변환

print(int('23'))
print(str(23))
print(divmod(25, 4))
print("3+4-5")
print(eval("3+4-5"))

#< 6 >
# input() : 키보드로 부터 입력받는 명령어
# 두수 입력받아 +,-,*,1 결과값 출력
#이때 실수는 소숫점첫째자리까지 표시

'''
print("첫 번째 수를 입력하세요. : ")
a = input()
print("두 번째 수를 입력하세요. : ")
b = input()
add = int(a) + int(b)
sub = int(a) - int(b)
mul = int(a) * int(b)
div = int(a) / int(b)
'''

'''
a=int(input('첫 번째 수를 입력하세요.: '))
b=int(input('두 번째 수를 입력하세요.: '))

add=a+b
sub=a-b
mul=a*b
div=a/b

print(a,"+",b,"=",add)
print(a,"-",b,"=",sub)
print(a,"*",b,"=",mul)
print(a,"/",b,"=",div)
print(a,"/",b,"=","%7.1f" %div)

'''
'''
num1=float(input("입력1: "))
num2=float(input("입력2: "))

print("합 :",num1+num2)
print("차 :",num1-num2)
'''

ee=input('연산식입력(예: 3.2+4.1*2)')
print("연산식 : ",eval(ee))


#< 7 >
'''
a=int(input('Enter First number: '))
b=int(input('Enter Second number:'))

div=a/b
per=a%b
ddiv=a//b
dmul=a**b

print(a,"/",b,"==>",div)
print(a,"%",b,"==>",per)
print(a,"//",b,"==>",ddiv)
print(a,"**",b,"==>",dmul)
'''
'''
distFromSun= 149600000
distFromMoon= 384400
print("지구에서 태양까지의 거리를 출력: ",distFromSun)
print("지구에서 달까지의 거리를 출력: ",distFromMoon)

ration= distFromSun/distFromMoon
print("지구는 달의",int(ration),"배")

'''
distFromSun = 149600000

distFromMoon = 384400

print('지구에서 태양까지 거리 A:', distFromSun)

print('지구에서 달까지 거리 B:', distFromMoon)

ratio = distFromSun / distFromMoon

print('A는 B의', int(ratio), '배')

