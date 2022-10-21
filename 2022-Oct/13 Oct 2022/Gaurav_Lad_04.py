#Accept array from user and rotate it from left by one place

arr = [] 
n = int(input("Enter number of elements you want to print : ")) 
for i in range(0, n): 
    ele = int(input("Enter element no {0}: ".format(i+1)))
    arr.append(ele) 
  
print("Original array : ",end=" ") 
for i in range(0,n): 
    print(arr[i],end=" ") 
  
print("\nRotated array : ",end=" ") 
for i in range(0,n-1): 
    print(arr[i+1],end=" ") 
print(arr[0])
