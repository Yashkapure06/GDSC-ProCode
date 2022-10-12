def printCombination(arr, n, r): 

if r==0: 

print(arr) 

return 

for i in range(n-1,-1,-1): 

    if i+1 >= r: 

        arr[i] = 1

        printCombination(arr, n, r-1) 

    else: 

        arr[i] = 0
