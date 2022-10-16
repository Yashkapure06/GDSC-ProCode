# Problem Statement : 15 Oct 2022


- Accept array from user and rotate it from left by d place <br>

```
Input: arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
Output: 3 4 5 6 7 1 2

Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=3
Output: 6 7 1 2 3 4 5



```

CPP Code 

```
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
   
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int d;
    cin>>d;
    int temp[d];
    
    for(int i=0;i<d;i++)
        temp[i]=a[i];
    
    for(int i=0;i<n-d;i++)
        a[i]=a[i+d];
    
    for(int i=0;i<d;i++)
        a[n-d+i]=temp[i];
    
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
    return 0;
}
```
