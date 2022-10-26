C_A = int(input("No of columns of matrix A:"))
R_A = int(input("No of raws of matrix A:"))
A = [[int(s) for s in input().split()] for i in range(C_A)] #Input matrix A

C_B = int(input("No of columns of matrix B:"))
R_B = int(input("No of raws of matrix B:"))
B = [[int(s) for s in input().split()] for j in range(C_B)] #Input matrix B

X = [] #resultant matrix

if C_A == R_B: #condition to multiply two matrices
    for k in range(R_A):
        r = []
        for l in range(C_B):        
            x = 0
            for m in range(R_B):
                x += A[k][m]*B[m][l]
                #X[k][l] += A[k][m]*B[m][l]
            r.append(x)
        X.append(r)

    for n in X:
        print(*n)

else:
    print("Invalid Parameters")
