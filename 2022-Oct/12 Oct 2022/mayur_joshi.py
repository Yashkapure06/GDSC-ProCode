inp1 = input().split()
inp2 = input().split()

res = []

for i in inp1:
  if i in inp2:
    res.append(i)
for i in res:
    print(i, end=' ')
