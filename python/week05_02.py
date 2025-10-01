#5주차_2
# 김동현
#1--------------------------------------------------------------------
print("-" * 30)
i = 0         #초기식
while i < 10: #조건식
    i += 1    #증감식, i++ , ++i은 안됨
    print(f"{i}번")
#2--------------------------------------------------------------------
print("-" * 30)
name = ""
while name != "quit":
    name = input("이름:").strip().lower()#이건 그냥 체화하는게 편함
    print(name)
#문제점:마지막에 quit도 찍힘
#3--------------------------------------------------------------------
print("-" * 30)
while True:
    name = input("이름:").strip().lower()
    if name == "quit":
        break;
    print(name)
#4--------------------------------------------------------------------
print("-" * 30)
name = "김동현"
#for in은 하나라고 생각하는게 편하다
for n in name:
    print(n)
#주의: 줄바뀜
#5--------------------------------------------------------------------
print("-" * 30)
name = ['inha', 'dongyang']
for n in name:
    for w in n:
        print(w)
    print(n)
#6--------------------------------------------------------------------
print("-" * 30)
scores = [100, 95, 75]
summary = 0
for score in scores:
    summary += score

avg1 = summary / len(scores)
avg2 = sum(scores) / len(scores)
print(avg1, avg2)
#7--------------------------------------------------------------------
print("-" * 30)
for i in range(5):
    print(i, end="/")
print()
#range에 들어가는 값(시작.기본(0),종료,증가량(1)) 
for i in range(1,5):
    print(i, end="/")
print()

for i in range(1,5,2):
    print(i, end="/")
print()

scores = [10, 20, 15]
for i in range(len(scores)):
    print(f"{i+1}:{scores[i]}")
print()

#8--------------------------------------------------------------------
print("-" * 30)
#7에서 쓰던 scores를 씁니다
scores_offset = []
for score in scores:
    if score >= 15:
        scores_offset.append(score + 2)

offset = []
#offset = [for score in scores]
offset = [score for score in scores]
print(offset)
offset = [(score + 2) for score in scores]
print(offset)
offset = [(score + 2) for score in scores if score >= 15 ]
print(offset)


