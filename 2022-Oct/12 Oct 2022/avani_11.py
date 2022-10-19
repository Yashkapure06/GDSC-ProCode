size=int(input("Enter Size of list1 : "))
s1=list([int(input("Enter element no {0} : ".format(x+1))) for x in range(size)])
size=int(input("\nEnter Size of list2 : "))
s2=list([int(input("Enter element no {0} : ".format(x+1))) for x in range(size)])
print("---Press enter---")
print("Common Elements in list : ",end='')
for i in s1:
    for j in s2:
        if i==j:
            print(i,end=' ')
