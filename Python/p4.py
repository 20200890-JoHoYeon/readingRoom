#4주차

#< 1 >
#미세 먼지 예보
PM = float(input('미세먼지(10마이크로그램)의 농도는 ?(예: 23.3) '))
#PM = 90 #particulate matter: 미세먼지
if PM >= 151:
    print('미세먼지 농도: {:.2f}, 등급: {}'.format(PM, '매우 나쁨'))
elif PM >= 81:
    print('미세먼지 농도: {:.2f}, 등급: {}'.format(PM, '나쁨'))
elif PM >= 31:
    print('미세먼지 농도: {:.2f}, 등급: {}'.format(PM, '보통'))
else:
    print('미세먼지 농도: {:.2f}, 등급: {}'.format(PM, '좋음'))

#< 2 >
## 변수 선언 부분
a, b, ch =-0, 0, ""

##메인(main) 코드 부분
a=int(input("첫번째 수를 입력하세요 : "))
ch=input("계산할 연산자를 입력하세요 : ")
b=int(input("두번째 수를 입력하세요 : "))

if(ch == "+"):
    print("%d + %d = %d입니다." %(a, b, a + b))
elif(ch == "-"):
    print("%d - %d = %d입니다." %(a, b, a - b))
else:
    print("알 수 없는 연산자 입니다.")

#< 3 >
#for i in (1, 2, 3) 순차적으로출력
for i in (1, 2, 3, ) :
    print(i)
#문자열이 아닌 문자로 하나씩 들어가면서 출력
for s in '뇌를  자극하는 파이썬' :
    print(s)

#< 4 >
#for s in range(시작값, 종료값 연속하는 두수의 차)
#출력은 종료값 -1 까지

for s in range(0,3,1):
    print(s)
    
print("=")
for s1 in range(0,5,2):
    print(s1)

print("=")
#연속하는 두수의 차 가 생략되면 1씩 증가
for s2 in range(0,3):
    print(s2)

print("=")
#종료값만 있다면 0부터 종료 전까지 1씩 증가
for s2 in range(3):
    print(s2)

#< 5 >
a, b, c, d =0, 0, 0, 0
hap = 0

a= int(input("1번째 숫자 : "))
b= int(input("2번째 숫자 : "))
c= int(input("3번째 숫자 : "))
d= int(input("4번째 숫자 : "))

hap = a + b + c + d

print(" 합계 ==> %d " % hap)

#해당 코드를 반복문을 통해 개선한 코드
#str() : 문자열 변환

aa=[]
for i in range(0, 4) :
    aa.append(0)
hap = 0

for i in range(0, 4) :
    aa[i] = int(input( str(i+1) + "번째 숫자 : "))

hap = aa[0] + aa[1] + aa[2] + aa[3]

print(" 합계 ==> %d " % hap)

#< 6 >
## 변수 선언 부분
money = 0
c = [500, 100, 50, 10]

## 메인(main) 코드 부분
money = int(input("교환할 돈은 얼마 ? "))

for i in range(0,4):
    tt = money / c[i]
    money = money % c[i]
    print("%d =>%d 개 " %(c[i],tt))
print("바꾸지 못한 잔돈 =>%d 원" %money)

#< 7 >
# 1+2+3+4+..........>=100

hap,i =0,0

for i in range(1,101) :
    hap = hap + i
    if hap >= 100 :
        break

print("1~100의 합에서 최초로 100이 넘는 위치: %d의 합 %d" % (i, hap))

#< 8 >
#1부터 100 사이에 3의 배수만 출력하지 않고 다른 수치 합 출력하기
hap, i = 0,0

for i in range(1,101) :
    if i % 3 == 0 :
        continue

    hap = hap + i

print("1~100의 합계(3의 배수 제외): %d" % hap)

#< 9 >
# end = "" , 한 줄에 모두 출력
# print로 줄바꿈된 것을 한줄에 출력되도록 함
for i in range(1,3,1):
    print("===> %d" %i)
    for j in range(1,4) :
        print("%d" %j, end ="",)
    print()

#< 10 >
# 1 ~ 10 = 55
# 1 ~ 20 = 210
# 1 ~ 30 = 465
#.....
# 1 ~ 100 = 5050
#--------------------
sum=0

for i in range(10,101,10) :
    sum=0
    for j in range(1, i+1) :
        sum=sum+j
    print("1~ %d = %d " % (i,sum))

#< 11 >
# 1 ~ 10 = 55
# 1 ~ 20 = 210
# 1 ~ 30 = 465
#.....
# 1 ~ 100 = 5050
#--------------------
'''
sum=0

for i in range(10,101,10) :
    sum=0
    for j in range(1, i+1) :
        sum=sum+j
    print("1~ %d = %d " % (i,sum))
'''
# 1 ~ 10 = 55
# 11 ~ 20 = 210
# 21 ~ 30 = 465
#.....
# 91 ~ 100 = 5050
#--------------------

sum=0

for i in range(10,101,10) :
    sum=0
    for j in range(i-9,i+1) :
        sum=sum+j
        
    print("%d ~ %d = %d " % (i-9,i,sum))

#< 12 >
import turtle
t = turtle.Turtle()
t.shape("turtle")
t.color("red")
t.stamp()
move = 30
for i in range(12):
    t.penup()
    t.forward(50)
    t.pendown()
    t.forward(25)
    t.penup()
    t.forward(15)
    t.stamp()
    t.home()
    t.right(move)
    move = move+30

#< 13 >
import turtle
t= turtle.Turtle()
t.shape("turtle")

s = turtle.textinput("","몇각형을 원하시나요?:")
n=int(s)

for i in range(n):
    t.forward(100)
    t.left(360/n)

#< 14 >
## 변수 선언 부분
selelct, answer, numStr, num1, num2 = 0,0,"",0,0

## 메인(main) 코드 부분
select=int(input("1. 수식 계산기 2. 두수 사이 합계 : "))

if  select == 1 :
    numStr=input("*** 수식을 입력하세요 : ")
    answer = eval(numStr)
    print("%s 결과는 %5.1f 입니다." % (numStr, answer))
elif select == 2 :
    num1=int(input(" *** 첫번째 숫자를 입력하세요 : "))
    num2=int(input(" *** 두번째 숫자를 입력하세요 : "))
    for i in range(num1, num2+1) :
        answer = answer + i
    print(" %d+...+%d의 합은 %d입니다. " %(num1, num2, answer))
else:
    print("1 또는 2만 입력해야 합니다.")
