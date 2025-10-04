"""#1
str1 = str(input("기호: "))
str2 = str(input("문자열 : "))
print(f"결과 : {str1[0]}{str2}{str1[1]}")
#2
s = []
for i in range(0,5):
    s.insert(i,input(f"{i+1}번 이름 : "))
strf = "/".join(s)
print(f"결과 : {strf}")
#3
rad = float(input("반지름 :"))
hei = float(input("높이 :"))
V = rad ** 2 * hei * 3.14159
print(f"원기둥의 부피 : {V:.2f}")
#4
person = int(input("인원 :"))
pizza = int(input("피자 수량 (판):"))
pizza_slice = int(input("피자 조각 (판당):"))
all_slice = pizza*pizza_slice
print(f"결과 : 인당 {all_slice//person}조각, 남은 조각 {all_slice%person}조각")
"""
first  = float(input("1학기 학점 : "))
second = float(input("2학기 학점 : "))
time = int(input("봉사시간 : "))
print("장학금 대상 여부 : ","확정" if (first+second)/2>=3.5 and time>=8 else "탈락")

