l1=[]
a=int(input("emter no. of element in list 1= "))
for i in range(a):
    c=input("enter element ")
    l1.append(c)
l2=[]
b=int(input("emter no. of element in list 2= "))
for i in range(b):
    d=input("enter element ")
    l2.append(d)
print("l1=",l1)
print("l2=",l2)
for i in range(a):
    for j in range(b):
        if l1[i]==l2[j]:
            print(l1[i])