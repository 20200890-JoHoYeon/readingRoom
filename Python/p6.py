#6주차

#< 1 >
import turtle

colors =["red","purple","blue","green","yellow","orange"]
t= turtle.Turtle()
turtle.bgcolor("black")

t.width(3)
length =10
while length <500:
    t.forward(length)
    t.pencolor(colors[length%6])
    t.right (89)
    length = length + 5

#< 2 >
#list는 데이터 변경가능 (리스트 생성 후 추가/수정/삭제가능)
#   List는 이름 그대로 목록 형식의 데이터를 다루는 데 적합

# tuple은 데이터 변경 불가능 (튜플 생성후 추가/수정/삭제 불가)
#   위경도 좌표나 RGB 색상처럼 작은 규모의 자료구조를 구성하기에 적합
#   tuple는 []가 아닌 () 사용

a=(1,2,3)
print(a)

b=1,2,3,4 # ()없이 콤마(,)만 사용
print(b)

print(b[1]) #슬라이싱
print(b[:3])
print(b[2:5])

#< 3 >
# + 연산자를 이용한 튜플간의 결합
d=(1,2,3)
e=(4,5,6)
f=(7,8)
print(d)
print(e)
print(f)
print(d+e+f)

#len()함수 : 요소의 갯수
g=(1,2,3)
print(len(g))

# 튜플은 추가/삭제/변경 불가능
g[0]=7

#< 4 >
#tuple unpacking : 튜플의 각요소를 여러개의 변수에 할당하는 것
b1=100, 200, 300
one, two, three =b1
print(one)
print(two)
print(three)

#언패킹 실패: 튜플요소수와 언패킹할 요소의 수가 일치 안함
#one1, two1=b1 

#언패킹을 이용한 변수 다중 할당
red,green,blue='seole',12.34,123.234
print(red)
print(green)
print(blue)

#< 5 >
#index(): 입력한 데이터와 일치하는 튜플내 요소의 첨자를 알려줌
#     찾고자하는 데이터와 일치하는 요소가 없으면 에러발생

a2=('abc','def','ghi')
print(a2.index('def'))
#print(a2.index('aaa'))  #찾는 데이터 없어 에러발생

#count(): 매개변수로 입력한 데이터와 일치하는
#   요소가 몇개 존재하는지 셈
a3=(1,100,2,100,3,100)
print(a3.count(100))
print(a3.count(10))

#< 6 >
## 변수 선언 부분
i, k, ch, starNum = 0,0,0,0
numStr, starStr ="", ""
## 메인(main) 코드 부분
numStr=input("숫자를 여러개 입력하세요 : ")
print("")
i=0
ch = numStr[i]
while True:
    starNum = int(ch)
    starStr = ""
    for k in range (0, starNum) :
        starStr = starStr + "\u2665"

    print(starStr)

    i=i+1
    if (i > len(numStr)-1):
        break
    ch=numStr[i]