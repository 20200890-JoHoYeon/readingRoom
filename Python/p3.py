#3주차

#< 1 >
# split() 문자열을 여러 문자열로 나누는 메소드
# 리스트[항목1, 항목2...]로 반환
# 공백은 whitespace(공백, 탭, 엔터)
st1='사과 배 복숭아 딸기'
print(st1.split())
st2='사과 100, 배 200, 복숭아 300, 딸기 50'
print(st2.split())

#< 2 >
# 4개의 수를 입력받아 합, 평균값, 최댓값, 최솟값을 출력
m, n, x, y =input('4개위 수 입력 >> ').split()
a, b, c, d = float(m), float(n), float(x), float(y),
print('입력 값: ', a, b, c, d)
sum =a + b + c + d
print('합: ', sum, '평균: ', sum / 4)
print('최대: ', max(a, b, c, d), '최소: ', min(a, b, c, d))

#< 3 >
# center() 폭을 지정하고 중앙에 문자열 배치하는 메소드
# strip() 문자열 앞뒤의 특정 문자들을 제거하는 메소드
# lsrtip()
# rsrtip()
st1='python'
print(st1.center(30,'*'))
print(st1.center(30))
print(st1.center(30,'='))
st3='***python---'
st4='   python   '
print(st4.lstrip())
print(st4.rstrip())
print(st4.strip())
print(st3.strip('*'))
print(st3.strip('-'))
print(st3.strip('* -'))

#< 4 >
# format() 서식지정 메소드
a,b = input('2개의 수 입력 >> ').split()
a=int(a)
b=int(b)
print('{1},{0}'.format(a,b))
print('{2}년 {0}월 {1}일'.format(3,2,2023))
print('{0} {1} {1}'.format('abc', 'def'))
print('{} + {}={}'.format(a,b,a+b))
print('{0} - {1}={2}'.format(a,b,a-b))
print('{0} / {1}={2:.3f}'.format(a,b,a/b))

print('%d / %d = %d' % (a,b,(a/b)))
print('%d / %d = %.2f' % (a,b,(a/b)))

#< 5 >
# 체질량 지수 (BMI: Body Mass Index): 키가 t 미터(m), 체중 w 킬로그램(kg)일 때
h, w = input('당신의 키(cm)와 몸무게(kg)는? >>').split()
height = float(h)
weight = float(w)
bmi = weight / (height/100)**2

print('키:%6.1f(cm), 몸무게:%5.1f(km), BMI:%5.1f' %(height, weight, bmi))
print('{} {}'.format('고도비만', 40 <= bmi))
print('{} {}'.format('중등도비만', 35 <= bmi < 40))
print('{} {}'.format('비만', 30 <= bmi < 35))
print('{} {}'.format('과체중', 25 <= bmi < 30))
print('{} {}'.format('정상', 18.5 <= bmi < 25))
print('{} {}'.format('저체중', bmi < 18.5))

#< 6 >
# 입력 단어가 지금까지 배운 파이썬의 키워드인지를 in문으로 검사해 결과를 출력
inkey = input('배운 파이썬 키워드를 입력하세요 >> ')
keywords = "'False', 'True', 'and', 'in', 'is', 'not', 'or'"
print('입력 단어 {}, 키워드인가? {}'.format(inkey, inkey in keywords))

#< 7 >
# 키가 140 이상이면 롤러코스터 타기
height = int(input('키 ?')) #탑승을 체크할 키를 대입
#height = 150 #탑승을 체크할 키를 대입
if 140 <= height:
    print('롤러코스터 T-Express, 즐기세요!')

#< 8 >
#if... else

print('수를 입력하세요 : ')
a = int(input())

if a ==0 :
    print('0은 나눗셈에 이용할 수 없습니다.')
    print("참이면 이 문장도 보이겠죠?")
else :
    print('3 /', a, '=', 3/a)
    print("거짓이면 이 문장도 보이겠죠?")
    
#< 9 >
# 영화 조조 할인 판정
from time import localtime # import
hour =localtime().tm_hour
mnt = localtime().tm_min
if hour < 10:
    print('지금 시각: %d시 %d분, 조조할인 됩니다. ' % (hour, mnt))
else:   
    print('지금 시각: %d시 %d분, 조조할인 안됩니다. ' % (hour, mnt))

#< 10 >
#if... elif...else
print('수를 입력하세요 : ')
a =  int(input())

if a > 10 and a % 2 == 0:
    print('10보다 큰 짝수')
elif a > 10 and a % 2 != 0:
    print('10보다 큰 홀수')
elif a % 2 == 0 :
    print('10이하의 짝수')
else :
    print('10이하의 홀수')

#< 11 >
a = int(input())

if a > 10:
    if a % 2 == 0 :
        print('10보다 큰 짝수')
    else :
        print('10보다 큰 홀수')

else :
    if a % 2 == 0 :
        print('10이하의 짝수')
    else :
        print('10이하의 홀수')

#< 12 >
import turtle           #터틀 그래픽 모듈을 불러온다.
import random           #난수 모듈을 불러온다.

screen = turtle.Screen()
image1 = "front.gif"
image2 = "back.gif"
screen.addshape(image1)
screen.addshape(image2)

t1 = turtle.Turtle()
coin = random.randint(0, 1)
if coin == 0 :
    t1.shape(image1)
else :
    t1.shape(image2)

#< 13 >
import turtle
t = turtle.Turtle()
t.shape("turtle")

t.penup()                           #펜을 올려서 그림이 그려지지 않게 한다.
t.goto(100,100)                     #거북이를 (100, 100)으로 이동시킨다.
t.write("거북이가 여기로 오면 양수입니다.")
t.goto(100, 0)
t.write("거북이가 여기로 오면 0입니다.")
t.goto(100,-100)
t.write("거북이가 여기로 오면 음수입니다.")


t.goto(0, 0)                        #(0, 0) 위치로 거북이를 이동시킨다.
t.pendown()                         # 펜을 내려서 그림이 그려지게 한다.
s =turtle.textinput("","숫자를 입력하시오: ")
n=int(s)
if (n > 0):
    t.goto(100, 100)
if (n == 0):
    t.goto(100, 0)
if (n < 0):
    t.goto(100, -100)