str = input("Enter string :")
x = str.split()
y = []
for word in x:
    z = word[: :-1]
    y.append(z)
print(" ".join(y))
