def permute(s,i,j):
    if i==j:
        print(''.join(s))
    else:
        for k in range(i,j+1):
            s[i],s[k]=s[k],s[i]
            permute(s,i+1,j)
            s[i],s[k]=s[k],s[i]
s=input("enter first string--")
a=len(s)
x=list(s)
permute(x,0,a-1)