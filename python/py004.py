#3주차 4번
test1 ="  JMT University  "

#str.split()의 반환형 : list
#공백 문자를 기준으로 분리
print(test1.split())
#조건 문자를 기준으로 분기
print(test1.split("i"))

#str.replace() 원 문자열을 손상시키지 못함.
#              신규 문자열 생성
#문자열은 불변 데이터 
print(test1.replace("University", "High School"))
print(test1)

print("|" + test1.strip() + "|")
print("|" + test1.lstrip() + "|")
print("|" + test1.rstrip() + "|")


print("*" * 30)

test2 = "i am a BOY."

print(test2.upper())
print(test2.lower())
print(test2.title())
print(test2.capitalize())

print("*" * 30)
print("/".join(test2))
print("*" * 30)

print(test2.find("am"))
print(test2.find("q"))
print(test2.index("am"))
#print(test2.index("q"))

print("*" * 30)

print(len(test2))       #함수 len()
print(test2.count("a")) #메소드 count()

#형태적으로 분석
#len(a) #(모두의) 함수
#a.len()#(누군가의/누군가만 호출하는) 메소드 
