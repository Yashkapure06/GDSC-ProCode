A = input().split()
n = 0
for i in range(len(A)):
    B = list(A[i])
    B.reverse()
    if ''.join(B)==A[i]:
        n+=1
print(n)
    
