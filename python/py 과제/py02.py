s = []
for i in range(0,5):
    s.insert(i,input(f"{i+1}번 이름 : "))
strf = "/".join(s)
print(f"결과 : {strf}")
