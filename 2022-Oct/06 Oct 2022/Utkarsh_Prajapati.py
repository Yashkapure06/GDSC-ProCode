a=input()
b=a.split(" ")
c=[]
for i in b:
    c.append(i[::-1])
d=" ".join(c)
print(d)
