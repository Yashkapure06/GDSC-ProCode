#getting inupts
N = int(input("Length of the array: "))
arr = list(map(int, input("Array: ").split()))
possible_answer = int(input("Possible Answer: "))

generated_answer = [] #array of possible indices

for i in range(N):
    
    if i == 0: #Check the first element
        if arr[i] >= arr[i+1]:
            generated_answer.append(i)
            
    if i == N-1: #Check the last element
        if arr[i] >= arr[i-1]:
            generated_answer.append(i)
            
    else: #Check the elements between first and last
        if arr[i] >= arr[i+1] and arr[i] >= arr[i-1]:
            generated_answer.append(i)
            
if possible_answer in generated_answer:
    print("Generated Output: 1")
else: print("Generated Output: 0")
