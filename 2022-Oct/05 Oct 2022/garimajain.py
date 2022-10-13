print("Finding Max length 0f a word from sting")
s=input("enter first string--")
if s==(""):
    print("0")
else:
    a=max(s.split(" "),key=len)
    print(len(a))
