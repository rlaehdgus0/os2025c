#3주차 2번
#슬라이싱 - slicing
a = "abcde"
b = a[1:]
c = a[-3:]
d = a[:2]
e = a[:-1]
f = a[2:4]
g = a[-4:-2]
h = a[:]
print(a);print(b);print(c);print(d);print(e);print(f);print(g);print(h);
#인덱싱 - indexing 
soc_number = input("주민등록번호:")

a = soc_number[0] #인덱싱 
print(type(a))    #인덱싱을 한 결과
print(id(a))      #인덱싱을 한 결과의 주소
print(id(soc_number)) #원 문자열 주소


print(soc_number[0])
print(soc_number[-1])
print(soc_number[-len(soc_number)])#0~(n-1)
print(soc_number[len(soc_number) - 1])

gender = 0
if len(soc_number) == 13:
    gender = soc_number[6]
elif len(soc_number) == 14:
    gender = soc_number[7]
#else:
 #   gender = 0
if 1<= int(gender) and int(gender) <= 6 : #and= &&
    if int(gender) % 2 == 1:
        gender =  "남"
    else :
        gender = "여"
print(gender)
