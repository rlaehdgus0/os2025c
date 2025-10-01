#6주차 2번
#김동현

print("------기본 dict 사용법------")
info = {} #info = dict()
info["n"] = "김동현" #(append) str:str
info["a"] = 20      #(append) str:int
info["h"] = 164.0   #(append) str:float
info[1] = 'One'     #(append) int:str
print(info)

info["h"] = 174.0   #(update)
print(info)

del info["h"]       #(delete)
print(info)

#print(info['h']) - KeyError

if 'h' in info:  #멤버십 연산자 이용해 key 유뮤 확인
    print(info['h'])
else:
    print("키 미등록")

search = info.get('h') #dict.get()메소드 이용해 값 찾기
if search:
    print(search)
else: # search => None => False
    print("키 미등록")

#dict.get()의 두번째 인자에 None의 대체값 넣기
print(f"키: {info.get('h', '-')} cm")
#----------------------------------------------------------------------------------
print("----------------------------------------------------------------------")
print("------dict 활용법------")

fruites = {'kim':'딸기', 'lee':'귤'}

for f in fruites.keys():
    print(f, fruites[f]) #f:key
    
for f in fruites:
    print(f, fruites[f]) #f:key

for f in fruites.values():
    print(f) #f:value

for f in fruites.items():
    print(f, f[0], f[1]) #f:tuple(key,value)
                         #f[0]:key f[1]:value

for f1, f2 in fruites.items():
    print(f1, f2)   #f1:key     f2:value
#-------------------------------------------------------------------------------
print("---------------------------------------------------------------------")
print("------dict 심화------")
a = {'h':127.0, 'w':30, 'e':2.0}
b = {'h':160, 'w':40}
c = [a, b]

for i, v in enumerate(c):
    print(f"{i+1}번 키-{v['h']}")
    print(f"{i+1}번 키-{c[i]['h']}")
    print(f"{i+1}번 키-{v.get('e','미측정')}")

bibim = {
    'source': '고추장',
    'topping': ['버섯','계란']
    }

print(f"양념:{bibim['source']}")
topping = "/".join(bibim['topping'])
print(f"고명:{topping}") #고명:버섯/계란 map도 나쁘지 않음

a = {
    "kim": {1: "귤", 2: "사과"},
    "lee": {1: "귤"},
    "park": {3:"복숭아", 1:"배", 2: "딸기"}
}


for k, v in a.items():
     print(f"{k}씨가 좋아하는 과일:")
     print(f"{','.join(v.values())}")

     for f in v.values():
         print(f"{f}")

     for i, f in v.items():
         print(f"{i}순위:{f}")

     indexes = sorted(v.keys())
     #indexes = (list(v.keys())).sort()
     for k in indexes:
          print(f"{k}순위:{v[k]}")    


     
