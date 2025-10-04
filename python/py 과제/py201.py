#1
"""
num = input("4자리의 정수입력:")
sum_num = 0
for i in range(len(num)):
    sum_num += int(num[i])
print(sum_num)
#2
point = int(input("점수:"))
if point <= 100 and point >= 0:
    print("학점:",end=" ")
    if point >= 90:
        print("A")
    elif point >= 80:
        print("B")
    elif point >= 70:
        print("C")
    elif point >= 60:
        print("D")
    else:
        print("F")
else:
    print("불가")
#3
import datetime
age = datetime.datetime.today().year - int(input("태어난 연도:")) + 1
print("결과:",end="")
if age<=26 and age>=8:
    if age >= 20:
        print("대학생")
    elif age >= 17:
        print("고등학생")
    elif age >= 14:
        print("중학생")
    else:
        print("초등학생")
else:
    print("학생이 아닙니다")
#4
print("+++숫자를 맞쳐보세요.(1~100)+++")
import random

random_num = random.randint(1,100)
cyc = 0
while True:
    cyc += 1
    n = int(input("입력:"))
    if(n==random_num):
        print(f"{n}가 정답입니다. 도전 횟수는 {cyc}회 입니다.")
        break
    else:
        print("숫자가","큽니다" if n>random_num else "작습니다")
#5
print("+++구구단 프로그램+++",end = "\n\n")
while True:
    num = str(input("구구단-단수(1-9):"))
    if(num.lower()=='q'):
        print("[종료]")
        break
    else:
        if(int(num)>9 or int(num)<1):
            print("입력한 '단'이 범위를 벗어납니다.")
            continue
        for i in range(1,10):
            print(f"{int(num)} * {i} = ", " " if(int(num)*i<10) else "",f"{int(num)*i}")
#6
            
num_list = [input(f"{i}번째:")for i in range(1,6)]
print("뒤집기:"+",".join(num_list[i] for i in range(4,-1,-1)))
print("오름차순:"+",".join(sorted(num_list,reverse = False)))
print("내림차순:"+",".join(sorted(num_list,reverse = True)))

#7
dic = {str(input("이름 : ")):int(input("점수: ")) for i in range(5)}
for i in dic.keys():
    print(f"이름:{i} 점수:{dic[i]}")
print("평균:"+sum(dic.values())/len(dic))

#8
score = [[49, 80, 20, 100, 80],[43, 60, 85, 30, 90],[49,82,48,50,100]]
average_list = []
for i in range(5):
    ans = 0
    for j in range(3):
        ans += score[j][i]
    average_list.insert(i,ans/3);
print(average_list)
score_ver_dic = {}
score_ver_dic["국어"] = score[0]
score_ver_dic["수학"] = score[1]
score_ver_dic["영어"] = score[2]
print(score_ver_dic)

#9
print("************************************\n[1]팝콘 - 5000원\n[2]나쵸 - 4000원\n[3]핫도그 - 3500원\n[4]음료 - 2000원\n주문을 끝내려면 [0]을 입력하세요\n*********************************")
menu_list = {1:5000,2:4000,3:3500,4:2000}
menu = 0
num = 0
price = 0
while True:
    menu = int(input("메뉴:"))
    if menu == 0:
        break
    if menu>=1 and menu <=4:
        num = int(input("수량:"))
        price += menu_list[menu]*num
        print()
    else:
        print("메뉴 선택을 다시 하세요")
print("====================================")
print(f"금액의 합계는 {price}입니다")

#10
phonenumber_list = {}
while True:
    name = str(input("이름:"))
    if name == "":
        break
    phonenumber = str(input("연락처:"))
    phonenumber_list[name] = phonenumber
for i in phonenumber_list.keys():
    print(i+" : "+phonenumber_list[i])
"""
#11
phonenumber_list = {}
while True:
    print("=======================\n[1] 추가\n[2] 검색\n[0] 종료\n==================================")
    chc = int(input("선택:"))
    if chc == 1:
        print("추가 기능 수행")
        while True:
            name = str(input("이름:"))
            if name == "":
                break
            phonenumber = str(input("연락처:"))
            phonenumber_list[name] = phonenumber
        print("=====연락처목록=====")
        for i in phonenumber_list.keys():
            print(i+" : "+phonenumber_list[i])
        print()
    elif chc == 2:
        print("검색 기능 수행")
        name_check = str(input("이름:"))
        if name_check in phonenumber_list:
            print(f"{name_check}의 연락처:{phonenumber_list[name_check]}\n")
        else:
            print("해당 이름의 연락처를 찾을 수 없습니다.\n")
    elif chc == 0:
        print("\n\n프로그램을 종료합니다.")
        break
    else:
        print()
