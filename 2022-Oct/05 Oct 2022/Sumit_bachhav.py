a=input("enter a sentence : ")
b=a.split()
c=0
m=0
for i in b:
    c=len(i)
    if c>m:
        m=c
print(m)
