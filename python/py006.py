#4주차 2

a = "abc"
b = list(a)
c = tuple(a)
print(b)
print(c)

#튜플(읽기 전용 리스트)
t1 = tuple()
t2 = ()
t3 = (1) #tuple아니 int
t4 = (1,)
t5 = "1", 2, 2.3
t6 = ("1", 2, 2.3)

#추가,삽입,수정,삭제 모두 안돼!
#t6[0] = 1
#del t6[0] 튜플의 슬라이싱은 튜플

a = t6 + t6
b = t6 * 3
print(len(a), len(b))
print(a,b)
print(a[-1])
print(a[:3])



def test():
    return (1,2) #tuple

a = test()
print(a)
b = list(a)
c = tuple(b)
