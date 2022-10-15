# Problem Statement : 12 Oct 2022


- Accept two list from the user and find common element from the both list<br>

```
Input: L1={10,20,30,40}, L2={40,50,60,70}
Output : 40

Input : L1={'A','B','C'}, L2={'D','B','A','E'}
Output : A, B

```

cpp solution
```

#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int n1,n2;
    //accept size of two array
    cin>>n1;
    cin>>n2;
    int a[n1];
    int b[n2];
    
    // accept two array
    for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];

    
    
    unordered_set<int>s;
    
        
    for(int i=0;i<n1;i++)
        s.insert(a[i]);
    
    for(int i=0;i<n1;i++)
    {
       for(int j=0;j<n2;j++)
       {
           if(a[i]==b[j])
                cout<<a[i]<<", ";
       }
    }
        
    

    return 0;
}

```
