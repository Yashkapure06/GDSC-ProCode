s=input("enter first string--")
a=[]
for i in range(len(s)):
    for j in range(i,len(s)):
        b=s[i:j+1]
        a.append(b)
c=sorted(a,key=len)
print(c)