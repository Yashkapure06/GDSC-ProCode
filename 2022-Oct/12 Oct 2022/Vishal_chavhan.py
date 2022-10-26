a = list(map(int, input("Enter first list: ").strip().split()))
b = list(map(int, input("Enter second list: ").strip().split()))
c = []
for i in range(len(a)):
    if a[i] in b:
        c.append(a[i])
print(', '.join(map(str, c)))