# Python program to find a peak element

def findPeak(arr, n):
    
    # first or last element is peak element
    if (n == 1):
        return 0
    if (arr[0] >= arr[1]):
        return 0
    if (arr[n - 1] >= arr[n - 2]):
        return n - 1

    # check for every other element
    for i in range(1, n - 1):
        if (arr[i] >= arr[i - 1] and arr[i] >= arr[i + 1]):
            return i


n = int(input())
arr = list(map(int, input().split()))
print("Index of a peak element is", findPeak(arr, n))
