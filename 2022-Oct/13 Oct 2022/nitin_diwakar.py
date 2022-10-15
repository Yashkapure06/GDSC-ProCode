arr = list(map(int,input().split()))    
n = 1;  
      
for i in range(0, n):    
    first = arr[0];  
      
    for j in range(0, len(arr)-1):    
        arr[j] = arr[j+1];  
            
    arr[len(arr)-1] = first;  
   
print(arr);  
     
  
