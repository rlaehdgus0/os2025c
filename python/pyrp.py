#-----------------변수,자료형,copy-------------------#
n1 = 1
n2 = "2"
print(f"{type(n1)} {type(n2)}")
print(n1+int(n2))
print(len(str(n1)+n2+" "))
print(str(n1)*10 + n2)
#print(len(n1+int(n2)))
print(len(str(n1)+n2))
p1 = 415
p2 = p1
print(p1, p2)
print(id(p1), id(p2))
#shallow copy
#p1 -> 415라는 값의 주소,p2 -> p1이 가리키는 주소에 있는 값 
p3 = int(str(p1))
print(p1, p3)
print(id(p1), id(p3))
#deep copy
#p3 -> p1이라는 값을 (중략)한 값을 넣음
#-----------------인덱싱,슬라이싱--------------------------#
print("----------------------------------------------")
e = "2.71890890490"
print(len(e))
print(e[:3],e[:-10])#자릿수-길이
#슬라이싱
COC = e[:-1]
print(type(COC))
print(id(e),id(COC))
#인덱싱
#-----------------출력--------------------------#
st = "ddddd"
print("dddadad%s" %st)
print("ddd{0:>10}".format(st))
print(f"{st:>10}")
#----------------함수와 메소드-----------------#
test2 = "i am a BOY."
print(len(test2))       #함수 len()
print(test2.count("a")) #메소드 count()


