#4주차 1번
#(순서 o,수정 o,중복 o,구성요소한정 x)
#배열: 고정길이, 메모리에 동일 크기로 연속적으로 할당
#리스트:가변길이, 메모리 연속할당 불가능,배열에 비해서 검색 속도가 느림 
#[1, 2]이런식으로 적어라
#list는 슬라이싱해도 list

#연산이 문자열과 비슷하다

#append reverse,sort,pop를 많이 씀(창룡선배 피셜)


cars = ["audi", "tesla", "benz", "kia", "lincoln", "hyundai"]

#순서를 역방향으로 정렬, 값이 아님.
#(원본 손상)
cars.reverse()
print(cars)

cars_copy = cars[:]#복사를 통해 사본 만들고 
cars_copy.reverse()#사본을 reverse()
print(cars_copy)

print(cars)

#sorted()함수 - 원본을 기준으로 사본을 만듬.
#list외 순서가 있는 collection이면 가능.
cars_copy =sorted(cars)#cars를 정렬한 값을 넣음
#cars_copy = sorted(cars, reverse= True)
print(f"cars_copy = {cars_copy}")
print(cars)

#오름차순(정방향,asc)으로 정렬
cars.sort()
print(cars)

#내림차순(역방향,desc)으로 '원본' 정렬
cars.sort(reverse=True)
print(cars)

motorcycles = ['daelim','bmw', 'yamaha', "suzuki", 'vespa']
#del 명령은 순수하게 요소를 삭제만 한다.
#a = del motorcycles[0]

#pop() 뒤부터 뽑아내다.
popdata = motorcycles.pop()
print(popdata)
popdata = motorcycles.pop(1)
print(popdata) #"bmw"가 뽑힘


#remove - 요소를 비교해서 삭제
motorcycles.remove("yamaha")

#index out of range
#popdata = motorcycles.pop(10)

#대소문자 구별함
#motorcycles.remove("DAELIM")

print(motorcycles)


motorcycles = ['honda', 'yamaha', "suzuki"]
#변경하기
motorcycles[0] = "bmw"
#추가하기
motorcycles.append("vespa")
#삽입하기
motorcycles.insert(0, "daelim")

print(motorcycles)
#del 인덱싱 (삭제)
del motorcycles[0]
#del 슬라이싱 (삭제)
del motorcycles[:2]
#del 슬라이싱 전체 삭제
del motorcycles[:]
n = int(input(""))
if n < len(motorcycles):
    del motorcycles[n]
    
print(motorcycles)


#stack queue: LIFO FIFO

data1 =[1,2,3,4,5]
data2 = [1,2,3,["a","b","c"]]
print(data1[0] + data1[-1]) #6
print(data2[0],type(data2[0])) #1,int
print(data2[-1], type(data2[-1]))#['a','b','c'], list  
print(data2[-1][-1], type(data2[-1][-1]))# 'c', str
print(data2[3][:2], type(data2[3][:2]))#['a','b'] , list

a = data1 + data1
b = [data1, data1]
c = data1 * 3

print(len(a), a)
print(len(b), b)
print(len(c), c)

#함수 이름을 변수로 쓰면 해당 함수를 이후 사용불가.
#id = "abc"
ad = "bcd"
#print(id)
print(id(ad))
list_1 = []
print(list_1)

list_2 = []
