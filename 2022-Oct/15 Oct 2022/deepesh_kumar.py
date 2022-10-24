def rotate(arr, d):
    n = len(arr)
    for i in range(d):
        temp = arr[0]
        for j in range(n-1):
            arr[j] = arr[j+1]
        arr[n-1] = temp
    return arr

# Driver code
arr = list(map(int, input().split()))
d = int(input())
for i in rotate(arr, d):
    print(i, end=" ")
