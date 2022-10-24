arr = list(map(int,input().strip().split()))
d = input()
d = int(d)
arr = arr[d:]+arr[:d]
print(arr)