#7주차

#< 1 >
#Dictionary 는 list와 비슷
#키-값의 쌍으로 구성
#탐색속도가 빠르고 사용하기도 편리
#중괄호 {} 사용
#특정슬롯에 새로운 키-값을 입력하거나 딕셔너리 안에 있는 요소를
#참조할때는 리스트와 튜플에서 처럼 대괄호 [] 이용

dic={}
dic['r']='red'
dic['g']='green'
dic['b']='blue'

print(dic['r'])
print(dic['g'])
print(dic['b'])

print(dic)
print(dic.keys())
print(dic.values())
print(dic.items())

print('r' in dic.keys())
print('t' in dic.keys())

#pop은 빼오는 것 해당 딕셔너리에서 빠지는 것
print(dic)
dic.pop('r')
print(dic)

#키-값 요소 전체 삭제
dic.clear()
print(dic)

phone_book={"홍길동":"010-1234-5678",
            "강감찬":"010-1234-5679",
            "이순신":"010-1234-5680",}
print(phone_book)

#< 2 >
season = {'봄': 'spring',
          '여름': 'summer',
          '가을': 'autumn',
          '겨울': 'winter'}
print(season.keys())
print(season.items())
print(season.values())

#메소드 keys()로 항목 순회
for key in season.keys():
    print('%s %s ' % (key, season[key]))

#items()로 순회
for item in season.items():
    print('{} {} '.format(item[0], item[1]), end= ' ')

print()
for item in season.items():
    print('{} {} '.format(*item), end= ' ')

#< 3 >
color = dict(검정='black', 흰색='white', 녹색='green', 파랑='blue')
print(color)

#항목 조회
print(color.get('녹색'))
print(color.get('노랑'))
print()

#항목 추가
color['노랑'] = 'yellow'
print(color)
print()

#항목 삭제
c = '흰색'
print('삭제: %s %s' % (c, color.pop('흰색')))
print(color)
c='빨강'
print('삭제: %s %s' % (c, color.pop(c, '없어요')))

print('임의 삭제: {} '.format(color.popitem()))
print('임의 삭제 후: {} '.format(color))

c='검정'
del color[c]
print('{} 삭제 후: {}'.format(c, color))

#모든 항목 삭제
color.clear()
print(color)

#< 4 >
foods = {   "떡볶이" : "오뎅",
            "짜장면" : "단무지",
            "라면" : "김치",
            "피자" : "피클",
            "맥주" : "땅콩",
            "치킨" : "치킨무",
            "삼겹살" : "상추" };
## 메인(main) 코드 부분
while (True) :
    #print("좋아하는 음식은 ?", end="")
    myfood = input(str(list(foods.keys())) + " 중 종하하는 것은 ? " )
    if myfood in foods :
        print("<%s> 궁합음식은 <%s>입니다." % (myfood, foods.get(myfood)))

    elif myfood == "끝" :
        break
    else :
        print("그런 음식이 없네요. 확인해 보세요.")

#< 5 >
#집합 (set) 원소는 유일하고(중복안됨) 순서는 의미 없음.
# 원소를 콤마로 구분하며 중괄호로 둘러싸 표현
# 인자는 리스트나 튜플의 항목으로 구성되어 집합생성
## list 대괄호 [] 사용, tuple는 []가 아닌 () 사용
s=set()
print(type(s))

d={}
print(type(d))

print(set([1,2,3]))
print(set((1,2,2)))

#print(set([12,[1,2,3]])) #집합의 원소로 리스트는 불가

planets = set('해달별')
print(planets)

fruits = set(['감','귤'])
print(fruits)
#print(fruits[0]) #순서가 없음 접근 불가

things = {('밤','잣'),('감','귤'),'해달'}
print(things)

#< 6 >
daysA = {'월','화','수','목'}
daysB = set(['수','목','금','토','일'])
weekends = set(('토','일'))

alldays = daysA | daysB #합집합, 중복은 한번만
print(alldays)

workdays = alldays - weekends
print(workdays)

print(daysA & daysB) #교집합, 중복만 출력

#중복된 것  빼고 모두 출력
print(daysA.symmetric_difference(daysB))
