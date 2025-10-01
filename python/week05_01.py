#5주차_1
# 김동현
#1--------------------------------------------------------------------
print("-" * 30)
toeic = int(input("TOEIC:"))
age = int(input("AGE:"))
temp = int(input("TEMPERATURE:"))

a = toeic >= 800 and age < 30 # 논리연산자 and or not
b = toeic >= 800 or age < 30
c = temp < 10 or temp > 28
d = age != 30 and toeic < 600 #연산자와 부호는 피연산자의 갯수로 구분한다
dd = not(age != 30 and toeic < 600)

height = int(input("height:"))
e1 = height >= 120 and height <= 160
e2 = 120 <= height <= 160
#e1 = e2
#(교수님이 재미로 쓰셨다곤 하셨다)

print(f"a:{a},b:{b},c:{c},d:{d},dd:{dd},e1:{e1},e2:{e2}")
#2--------------------------------------------------------------------
print("-" * 30)
car1 = "KIA"#그냥 수업에 잠깐 나와서 말씀해주심
car2 = "Kia"
print(car1 == car2)
print(car1.lower() == car2.lower())
print(car1.upper() == car2.upper())
#3--------------------------------------------------------------------
print("-" * 30)
names = ["Kim","Pack","Oh","Koo"]
name = input("친구 이름:")
#맴버십 연산자
print(name in names)#해당하는 부분이 있으면 참
print(name not in names)#해당하는 부분이 없으면 참
print(name.lower() in names)
print(name.lower() not in names)
#4--------------------------------------------------------------------
print("-" * 30)
socnum = input("주민등록번호:")
gender = int(socnum[7]) % 2
if gender == 0:#if문
    msg = "여성"
if gender == 1:
    msg = "남성"
print(f"성별 : {msg}")
#5--------------------------------------------------------------------
#4번 수정
print("-" * 30)
socnum = input("주민등록번호:")
if '-' in socnum:
    gender = int(socnum[7]) % 2
else:
    gender = int(socnum[6]) % 2
if gender == 0:#if문
    msg = "여성"
else:
    msg = "남성"
print(f"성별 : {msg}")
#6--------------------------------------------------------------------
#4번을 수정한 5번을 수정
#교수님은 이방법을 선호 하신다
print("-" * 30)
socnum = input("주민등록번호:")
if '-' in socnum:
    index = 7
else:
    index = 6
gender = int(socnum[index]) % 2
if gender == 0:
    msg = "여성"
else:
    msg = "남성"
print(f"성별 : {msg}")
#7--------------------------------------------------------------------
#4번을 수정한 5번을 수정한 6번을 수정
print("-" * 30)
socnum = input("주민등록번호:")
index = 7 if '-' in socnum else 6 #조건부 표현식
gender = int(socnum[index]) % 2
#gender = int(7 if '-' in socnum else 6) % 2 너무 길어서 나중에 햇갈림
if gender == 0:
    msg = "여성"
else:
    msg = "남성"
print(f"성별 : {msg}")
#8--------------------------------------------------------------------
print("-" * 30)
score = int(input("점수:"))
#유사 switch case
if score >= 90:
    print("A")
elif score >= 80:
    print("B")
elif score >= 70:
    #print("이건 좀...")
    print("C")
elif score >= 60:
    #print("이건 좀...")
    print("D")
else:
    #print("이건 좀...")
    print("F")
#9--------------------------------------------------------------------
#8번 수정
print("-" * 30)
score = int(input("점수:"))
#유사 switch case
if score >= 90:
    print("A")
elif score >= 80:
    print("B")
else: #중첩 if (nested if)
    print("이건 좀...")
    if score >= 70:
        print("C")
    elif score >= 60:
        print("D")
    else:
        print("F")


