#5주차

#< 1 >
#1 부터 5까지 수 출력
i=1
while i<=5:
        print(i)
        i=i+1
print("프로그램종료:")

#< 2 >
while True:
    print('반복을 계속할까요? [예/아니오] :')
    answer = input()

    if answer == '예':
        num=int(input("1부터 합을 낼 수치를 입력?"))
        i=1
        sum=0
        while i<=num :
            sum=sum+i
            i=i+1
        print("1부터 ",num,"까지의 합:",sum)
    elif answer == '아니요' :
        break
    else :
        print('정상적인 답변이 아닙니다.')

print('반복이 종료되었습니다.')

#< 3 >
#컴퓨터와 수치 맞추는 게임
import random
tries =0
guess =0
answer = random.randint(1,10)
print("1부터 10 사이의 숫자를 맞추시오")
while guess != answer:
    guess = int(input("숫자를 입력하시오: "))
    tries = tries + 1
    if guess < answer:
        print("낮음!")
    elif guess > answer:
        print("높음!")
if guess == answer:
    print("축하합니다. 시도횟수=", tries)
else:
    print("정답은 ", answer)

#< 4 >
import turtle

t= turtle.Turtle()

i=0
while i < 4:
    t.forward(100)
    t.right(90)
    i = i + 1 

#< 5 >
import turtle

t= turtle.Turtle()
t.shape("turtle")
t.width(3)

t.shapesize(3,3)

while True:
    command=input("명령을 입력하시오:")
    if command =="l":
        t.left(90)
        t.forward(100)
    if command =="r":
        t.right(90)
        t.forward(100)
    if command =="t":
        t.right(120)
        t.forward(100)

#< 6 >
# list 데이터 목록을 다루는 자료형, 단일 데이터 사용
# 리스트는 콤마로 구분된 항목(또는 원소)들의 리스트로 표현
# 항목을 정수, 실수, 문자열, 리스트 등이 모두 가능
# 항목 순서는 의미가 있으며, 항목 자료 값은 중복돼도 무관
#   대괄호 []  사용
# list() 빈 리스트 생성
# append 리스트 가장 뒤에 항목추가
# 슬라이싱

coffee = ['에스프레소', '아메리카노', '카페라떼', '카페모카']
c=list()
print(coffee)

num = 0
for s in coffee:
    num += 1
    print('%d. %s' % (num, s))
print(coffee[0])
print(coffee[1])
print(coffee)
print("===")
print(c)
c.append('java')
c.append('c++')
print(c)
print(coffee[0:2])
print(coffee[:2])
print(coffee[2:])

#< 7 >
# + 연산자를 통한 리스트간의 결합
#리스트내의 특정위치에 있는 데이터 변경
# len() 함수로 리스트길이 계산
a=['red','green','blue']
b=[1,2,3,4,5]
c=[6,7,8]

print(b+c)

print(b)
b[2]=20
print(b)

print(len(b))

#< 8 >
# append() 리스트끝에 새요소를 추가
# extend() 기존 리스트에 다른 리스트를 이어붙임 + 연산자와 비슷
# insert() 첨자로 명시한 리스트내의 위치에 새요소 삽입
# remove() 매개변수로 입력한 데이터를 리스트에서 제거
# pop() 리스트의 마지막 요소를 뽀아내어 리스트에서 제서
# pop(인덱스번호) 해당 인덱스번호의 요소를 리스트에서 제거
# index() 리스트내에서 매개변수로 입력한 데이터 추출
# 일치하는 데이터가 없을 경우 오류발생
# count() 매개변수로 입력한 데이터와 일치하는 요소가 몇개 존재하는지 셈

a=['red','green','blue']
b=[1,2,3,4,5]
c=[6,7,8]

b.append(100)
print(b)

d1=[1,2,3]
d1.extend([4,5,6])
print(d1)
print('===')
d2=[2,4,6]
d2.insert(0,10)
print(d2)
b.insert(3,100)
print(b)

a.remove('green')
print(a)
print('===')
for i in range(len(b)):
    print(b[i])
print('===')
d4=[1,2,3,4,5]
d5=[5,6,7,8]
d4.pop()
print(d4)

d5.pop(2)
print(d5)
print('===')
d6=['red','green','blue']
print(d6.index('green'))
#print(d6.index('book')) #book 값이 없어 오류 발생
print('===')
d7=[1,2,3,2,5,7,2]
print(d7.count(2))
print(d7.count(10))

#< 9 >
#sort() 리스트내의 요소를 정렬
#매개변수 reverse=True로 입력하면 내림차순
#       아무것도 입력하지 않으면 오름차순 정렬
#reverse() 리스트내 요소의 순서를 반대로 변경

d8=[3,1,20,6,15]
d8.sort
print(d8)

d8.sort(reverse=True)
print(d8)

d9=[3,4,5,1,2]
d10=['red','green','blue']

d9.reverse()
print(d9)

d10.reverse()
print(d10)

#< 10 >
a=['book']
word=list('book')
print(a)
print(word)

no_list=['red','green','blue']
while no_list:
    print('{0}'.format(no_list.pop()))

#< 11 >
'''
[리스트]
sports = ['축구','야구','농구','배구']
num=[11,9,5,6]

(1)
[결과]
축구: 11명 야구: 9명 농구: 5명 배구: 6명

'''

sports = ['축구','야구','농구','배구']
num=[11, 9, 5, 6]
for i in range(len(sports)):
    print('%s: %d명 ' % (sports[i], num[i]), end = ' ')

#< 12 >
sports = ['축구','야구','농구','배구']
num=[11, 9, 5, 6]
#2차원 리스트로 생성
sponum = [sports, num]
print(sponum)
#2차원 리스트에서 출력
for i in range(len(sponum[0])):
    print('%s: %d명 ' % (sponum[0][i], sponum[1][i]), end = ' ')

'''
[['축구','야구','농구','배구'], [11, 9, 5, 6]]
축구: 11명 야구: 9명 농구: 5명 배구:6명
'''

#< 13 >
sports = ['축구','야구','농구','배구']
num=[11, 9, 5, 6]
#다른 구조의 2차원 리스트 생성을 컴프리헨션으로 처리
psponum = [[sports[i], num[i]] for i in range(len(sports))]
print(psponum)
#위 리스트에서 출력
for one in psponum:
    print('%s: %d명 ' % (one[0], one[1]), end = ' ')

'''
[['축구', 11],['야구', 9], ['농구', 5], ['배구', 6]]
축구: 11명 야구: 9명 농구: 5명 배구: 6
'''
