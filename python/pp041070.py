#041
ticker = "btc_krw"
print(ticker.upper())
#042
ticker = "BTC_KRW"
print(ticker.lower())
#043
i = str(input(""))
if i == "hello":
    print(i.capitalize())
#044 *
file_name = "보고서.xlsx"
print(file_name.endswith("xlsx"))

#045 *
file_name = "보고서.xlsx"
print(file_name.endswith(("xlsx","xls")))
#046
file_name = "2020_보고서.xlsx"
print(file_name.startswith("2020"))
#047
a = "hello world"
print(a.split(" "))
#048
ticker = "btc_krw"
print(ticker.split("_"))
#49
date = "2020-05-01"
print(date.split("-"))
#50
data = "039490     "
print(data.rstrip())
#51
movie_rank = ["닥터 스트레인지","스플릿","럭키"]
#52
movie_rank.append("배트맨")
print(movie_rank)
#53
movie_rank.insert(1,"슈퍼맨")
print(movie_rank)
#54
del movie_rank[3]
print(movie_rank)
#55
del movie_rank[3],movie_rank[2]
print(movie_rank)
#56
lang1 = ["C", "C++", "JAVA"]
lang2 = ["Python", "Go", "C#"]
print(lang1+lang2)
#057
nums = [1, 2, 3, 4, 5, 6, 7]
mi = min(nums)
ma = max(nums)
print(mi , type(mi), ma, type(ma))
#058
nums = [1, 2, 3, 4, 5]
print(sum(nums))
#059
cook = ["피자", "김밥", "만두", "양념치킨", "족발", "피자", "김치만두", "쫄면", "소시지", "라면", "팥빙수", "김치전"]
print(len(cook))
#060
nums = [1, 2, 3, 4, 5]
print(sum(nums)/len(nums))
#061
price = ['20180728', 100, 130, 140, 150, 160, 170]
print(price[1:])
#062 *
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#print(nums[i] for i in nums if i%2==1)
print(nums[::2])
#063
print(nums[1::2])
#064
print(nums[::-1])
#065
interest = ['삼성전자', 'LG전자', 'Naver']
print(interest[0],interest[2])
#066
interest = ['삼성전자', 'LG전자', 'Naver', 'SK하이닉스', '미래에셋대우']
print(" ".join(interest))
#067
print("/".join(interest))
#068
print("\n".join(interest))
#069
string = "삼성전자/LG전자/Naver"
interest = string.split("/")
print(interest)
#070
data = [2, 4, 3, 1, 5, 10, 9]
print(data.sort())
print(sorted(data))
