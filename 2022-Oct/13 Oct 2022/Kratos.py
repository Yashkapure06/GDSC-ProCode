arr = list(map(int,input().strip().split()))
arr = arr[1:]+arr[:1]
print(arr)