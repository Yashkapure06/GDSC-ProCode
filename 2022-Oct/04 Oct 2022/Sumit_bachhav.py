str1=input("enter first string : ")
str2=input("enter second string : ")
set1=set()
set2=set()
for i in str1:
    set1.add(i)
for j in str2:
    set2.add(j)
if set1==set2:
    print("true")
else:
    print("false")
