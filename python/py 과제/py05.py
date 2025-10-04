first  = float(input("1학기 학점 : "))
second = float(input("2학기 학점 : "))
time = int(input("봉사시간 : "))
print("장학금 대상 여부 : ","확정" if (first+second)/2>=3.5 and time>=8 else "탈락")

