def palindrome(a):
    if a==a[::-1]:
        return "true"
    else:
        return "false"

s=input("enter the sentence to check for palindrome word: ")
a=s.split()
b=0
for i in a:
    if palindrome(i)=="true":
        b=b+1
print(b)
