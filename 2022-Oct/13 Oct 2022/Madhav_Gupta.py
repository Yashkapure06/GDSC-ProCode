arr = list(map(int, input().split()))
size = len(arr)

res = []
for i in range(size):
    temp = (i-1+size)%(size)
    res.insert(temp, arr[i])
for i in res:
    print(i, end=' ')
