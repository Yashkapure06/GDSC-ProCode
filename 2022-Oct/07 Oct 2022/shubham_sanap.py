from operator import truediv


s=input("enter first string--")
x=s.split()
def palindrome(x):
    if x==x[::-1]:
        return "true"
    else:
        return "false"
def largest(x):
    b=[]
    for i in x:
        if palindrome(i)=="true":
            b.append(i)
    s=max(b)
    print(s)
largest(x)


        


    



