def rotateList(arr,d,n):
  arr[:]=arr[d:n]+arr[0:d]
  return arr
arr = [] 
n = int(input("Enter number of elements you want to print : ")) 
print("----------------------------------------")
for i in range(0, n): 
    ele = int(input("Enter element no {0}: ".format(i+1)))
    arr.append(ele) 
d = int(input("Enter value of d:  : "))
print("----------------OUTPUT-----------------")
print("Orignal Array: ",arr)
print("----------------------------------------")
print("Rotated Array: ",rotateList(arr,d,len(arr)))
print("----------------------------------------")
