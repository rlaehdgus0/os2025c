#3주차 1번
a = ""#빈 문자열
b = "I like Python"
c = " "#공백 문자열

print(len(a))
print(len(b))
print(len(c))

t1 = 1
t2 = "1"
a = t1 + t1
b = t2 + t2
"""c = t1 + t2 (이렇게 하면 안됨)"""
d = str(t1) + t2
e = t1 + int(t2)
print(a, b, d, e)

print("*" * 10)

a = "in'h'a \nuniv"
b = 'in"h"a \nuniv'
c = """inha
univ"""
d = """inha
       univ"""
print(a)
print(b)
print(c)
print(d)
