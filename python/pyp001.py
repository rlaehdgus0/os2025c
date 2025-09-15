print("Hello world")
a = "I'm forgotten"
print(a[0:13])
#0 <= a < 13
print(a[4:13])
print("I know %d" % 3)
print("I know %s" % "three")
print("I know %s" % a)
print("I know %s and I know %s" % ("three",a))
print("I know {0} and {1}".format(a,a))
print(f"I know {a+"adjkdj"}")
y = 3.141592
print("{0:10.4f}".format(y))
b = a.count('t')
print(b)
b = a.find('t')
print(b)
