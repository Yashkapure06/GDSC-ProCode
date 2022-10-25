#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n][n], arr2[n][n],arr3[n][n];
    
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>arr2[i][j];
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
