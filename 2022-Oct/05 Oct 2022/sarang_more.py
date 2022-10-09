#sarang more
print("Accept a string from user and return MAX length of a word from string")
string= input ("enter your string :")
if string==(""):
    print("0")
else :
    a=max(string.split(),key=len)
    print(len(a))
