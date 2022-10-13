t=0
s=""
k=0
for i in input().split():
    if i==i[::-1] and len(i)>t:
        s=i
        k=1
if k==0:
    print("There are no palindromes.")    
print(s)
