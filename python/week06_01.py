#6주차
#김동현

values = ['1', '2', '3']
#반복문
values_int = []
for v in values:
    values_int.append(int(v))
print(values_int)
#리스트내포
values_int = [int(v) for v in values]
print(values_int)
#map()
values_int = list(map(int, values))
print(values_int)
#----------------------------------------
students = []
titles = ["국어", "영어", "수학"]

number = int(input("인원:"))
for n in range(1, number+1):
    print(f"{n} 학생:")
    scores = []
    for t in titles:
        score = float(input(f"{t}:"))
        scores.append(score)
    students.append(scores)

for v in enumerate(students):
    print(v) #tuple
    print(v[0], v[1]) #v[1]:list

for i, v in enumerate(students):
    print(i, v) #v:list


for i, v in enumerate(students):
    print(f"{i+1}:")
    for j, score in enumerate(v):
        print(f"{titles[j]}:{score}")
#----------------------------------------
