# Problem Statement : 16 Oct 2022


- Accept two n size  2D array from user and add them  <br>

```
Input:  int A[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };
 
    int B[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };
Output:
      2 2 2 2 
      4 4 4 4 
      6 6 6 6 
      8 8 8 8 
      
------------------------------------------------

Input:  int A[N][N] = { { 1, 2, 3, 2 },
			{ 2, 1, 2, 3 },
			{ 2, 3, 1, 3 },
			{ 2, 3, 4, 5 } };

	      int B[N][N] = { { 1, 2, 4, 2 },
			      { 2, 2, 2, 3 },
			      { 3, 5, 3, 3 },
			      { 1, 4, 3, 4 } };
Output:
      2 4 7 4 
      4 3 4 6 
      5 8 4 6 
      3 7 7 9 



```

CPP Code


```

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<c[i][j]<<" ";
        cout<<"\n";
    }
    
    return 0;
    

    return 0;
}

```
