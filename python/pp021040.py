#021
letters = 'python'
print(letters[0],letters[2])
#022
license_plate = "24가 2210"
print(license_plate[4:])
#023
string = "홀짝홀짝홀짝"
"""for i in string:
    if(i=="홀"):
        print("홀","")"""
print(string[::2])#시작인덱스:끝인덱스:오프셋
#024
string = "PYTHON"
print(string[::-1])
#025
phone_number = "010-1111-2222"
phone_number1 = phone_number.replace("-", " ")
print(phone_number1)
#026
phone_number2 = phone_number.replace("-", "")
print(phone_number2)
#027
url = "http://sharebook.kr"
#print(url[17:])
url_split = url.split('.')
print(url_split[-1])
#028
#"Python" 오답 문자열은 수정할수없음
#029
string = 'abcdfe2a354a32a'
str1 = string.replace("a","A")
print(str1)
#030
#'aBcd'오답 문자열은 수정할수없음
#031
#34
#032
#HiHiHi
#033
print("-" * 80)
#034
t1 = 'python'
t2 = 'java'
print((t1+" "+t2+" ")*4)
#035
name1 = "김민수" 
age1 = 10
name2 = "이철희"
age2 = 13
print("이름: {0} 나이: {1}\n이름: {2} 나이: {3}".format(name1,age1,name2,age2))
#036
#035번을 format으로 풀었어야 하는데 문제 이해를 잘못해서 35을 포맷으로 품 고로 이밑의 정답은 35번의 정답임
print("이름: %s 나이: %d\n이름: %s 나이: %d" %(name1,age1,name2,age2))
#037
print(f"이름: {name1} 나이: {age1}\n이름: {name2} 나이: {age2}")
#038
상장주식수 = "5,969,782,550"
ans = int(상장주식수.replace(",",""))
print(ans,type(ans))
#039
분기 = "2020/03(E) (IFRS연결)"
분기S = 분기[0:7]
print(분기S)
#040
data = "   삼성전자    "
data1 = data.strip()
print(data1)

