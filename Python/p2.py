#2주차

#< 1 >
import turtle       #터틀 그래픽 모듈을 불러오는 작업
t= turtle.Turtle() #거북이를 생성
t.shape("turtle") #커서의 모양을 거북이
#t.shape("circle") #커서의 모양을 원
t.forward(100) #100px 만큼 앞으로 이동
t.left(120) #왼쪽으로 120도 만큼 방향을 회전
t.forward(100)
t.left(120)
t.forward(100)  #삼각형

t.left(90) #왼쪽으로 90도 만큼 방향을 회전
t.forward(100)
t.left(90)
t.forward(100)  
t.left(90)
t.forward(100)  #사각형

t.forward(100) #100px 만큼 앞으로 이동
t.left(72) #왼쪽으로 72도 만큼 방향을 회전
t.forward(100)
t.left(72)
t.forward(100)
t.left(72)
t.forward(100)  
t.left(72)
t.forward(100)  #오각형

t.forward(100) #100px 만큼 앞으로 이동
t.left(60) #왼쪽으로 60도 만큼 방향을 회전
t.forward(100)
t.left(60)
t.forward(100)
t.left(60)
t.forward(100)
t.left(60)
t.forward(100) 
t.left(60)
t.forward(100)  #육각형

t.circle(100)   #원형

#< 2 >
#bool형 true, false 두가지 값을 나타내는 자료
a=3>2
print(a)

a=2>3
print(a)

print(type(a))

#< 3 >
#논리 연산자 not
b= not True
print(not True)
print(b)
b2=not 0
print(b2)

#< 4 >
# 산술연산 => 비교연산자=> 논리연산자
# and 연산자 결과 True, False
# or 연산자 결과 True, False
print("===")
print(10>2 and 20>3)
print(10>2 and 20<3)
print(10>2 or 20>3)
print(10>2 or 20<3)

#< 5 >
#비교연산자 ==, !=, >, >=, <, <=
a=30
print(a == 10)

print(a != 10)

#< 6 >
a="col'o'r"
b='col"o"r'

print(a)
print(b)

#< 7 >
#len() 문자열의 길이 반환
# 슬라이싱(Slicecing) 전체에서 일부분을 참조
#str[start:end] 문자열 str에서 start 첨자에서 end-1 첨자까지 문자열 반환

str = 'Monty Python'
print(len(str))
print(str[0:5],str[0:3], str[6:], str[6:12])
print(str[-12:-7],str[-6:])

#< 8 >
str =input('다섯 문자 이상의 문자열 입력 >> ')
print('입력 문자열: %s' % str)
print('입력 문자열 길이: %d' % len(str))
print('첫 문자: %c' % str[:1])
print('마지막 문자: %c' % str[-1:])
print('첫 문자를 제외한 부분 문자열: %s' % str[1:])
print('마지막 문자를 제외한 부분 문자열: %s' % str[:-1])
print('맨 앞과 뒤의 두 문자씩을 제외한 부분 문자열: %s' % str[2:-2])
print('문자 하나씩을 건너 뛴 부분 문자열: %s' % str[::2])
print('역 문자열: %s' % str[::-1])

#< 9 >
str = 'Hello python!'
n= len(str)
print('문자열', str, '길이', n)
print('첫 문자', str[0], str[-n])
print('가운데  문자', str[n//2], str[-n//2],n//2,-n//2)
print('마지막 문자', str[n-1], str[-1])

#< 10 >
# 문자열[start:end:step]
#step 간격 생력되면 1
#음수일 경우 역순 문자열 반환
str='python'
print(str[0:4:2]);
print(str[::3]);
print(str[::-2]);

#< 11 >
# ord() 코드 번호 반환
# chr() 해당 코드 번호의 문자 반환
# \n 줄바꿈
st1='a'
a1=65
print(ord(st1))
print(chr(a1))
print('book\nbook')

#< 12 >
#min() 최솟값을 반환하는 함수
#max() 최대값을 반환하는 함수

print('ipython')
print(min('ipython'))
print(max('ipython'))
print(min('python','java','html'))
print(max('python','java','html'))
print(min(3,96.4,13,40))
print(max(3,96.4,13,40))

#< 13 >
#replace(old,new,count) 문자열 바꿔 반환하는 메소도
#옵션 count는 대체 횟수 지정
st='pythonpythonpython'
print(st)
print(st.replace('y','*'))
print(st.replace('y','*',1))
print(st.replace('y','*',2))
print(st.replace('a','*'))

#< 14 >
value = input('실수(3자리.2자리로 345.78처럼)를 하나 입력하세요. >> ')
num = value.replace('.','')

sum =0
sum += int(num[0])
sum += int(num[1])
sum += int(num[2])
sum += int(num[3])
sum += int(num[4])

print('입력 값:', value)
print('변환 값:', num)
print(num[0])
print(num[1])
print('모든 자릿수 합:', sum)

#< 15 >
#count() 문자열 출현 횟수를 반환
#join() 문자열의 문자와 문자 사이에 원하는 문자열을 삽입

st1='welcome'
st2='단순한 것이 복잡한 것보다 낫다'
num='12345'
print(st2.count('복잡'))
print(st1.count('e'))
print(st1.count('a'))
print(st2.count('것'))

print('->'.join(st1))
print(' '.join(num))
print('aa'.join(num))
print('a'.join(num))

#< 16 >
#find() 문자열 찾는 메소드 없으면 -1을 반환
#index() 문자열 찾는 메소드 없으면 valueError 발생

st1='python'
st2='자바 C 파이썬 코틀린'
print(st1.find('h'))
print(st1.find('a'))
print(st2.find('자바'))
print(st2.find('파이'))
print(st2.find('파이썬'))

print(st1.index('h'))
print(st2.index('파이'))
print(st1.index('a'))
