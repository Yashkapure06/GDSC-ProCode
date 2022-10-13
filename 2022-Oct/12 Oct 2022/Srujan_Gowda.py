#user input
L1 = input().split()
L2 = input().split()

common_elements = list()

for i in L1:
    if i in L2:
        common_elements.append(i)

#print the common element
for i in common_elements:
    print(i,end=" ")