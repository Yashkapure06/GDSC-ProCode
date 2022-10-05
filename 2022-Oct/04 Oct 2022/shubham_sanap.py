print("checking if two strings are anagram or not")
s1=input("enter first string--")
s2=input("enter second string--")

if sorted(s1)==sorted(s2):
    print("True")
else:
    print("False")
