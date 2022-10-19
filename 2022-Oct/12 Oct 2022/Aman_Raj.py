list1=[]
list2=[]
list3=[]
x=int(input("Enter the size of list 1 : "))
y=int(input("Enter the size of list 2 : "))
print("Enter the element of list 1 : ")
for i in range(x):
    m=int(input())
    list1.append(m)
print("Enter the element of list 2 : ")
for j in range(y):
    n=int(input())
    list2.append(n)
for k in range(x):
    for l in range(y):
        if list1[k]==list2[l]:
            list3.append(list1[k])
print(list3)
