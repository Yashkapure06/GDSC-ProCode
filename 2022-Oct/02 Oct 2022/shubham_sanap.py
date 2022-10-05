s=str(input("enter the string--"))
a=0
for i in s:
    if i.isupper():
        a=a+1
    else:
        pass
print("no. of capital letters is ",a)
        