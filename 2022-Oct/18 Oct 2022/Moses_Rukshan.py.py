A = [[int(s) for s in input().split()] for i in range(4)] #Input matrix
B = []

#Transpose the matrix and add into the list B
for j in range(len(A)):
    C = []
    for k in range(len(A[0])):        
        C.append(A[k][j])
    B.append(C)

#Print as given format
for l in range(len(B)):
    print(*B[l])
