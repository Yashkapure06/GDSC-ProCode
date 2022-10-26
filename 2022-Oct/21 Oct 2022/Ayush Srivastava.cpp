#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cout<<"Enter the size of first matrix: ";
    cin>>n1>>n2;
    cout<<"Enter the size of second matrix: ";
    cin>>n3>>n4;
    int arr1[n1][n2], arr2[n3][n4];
    cout<<"Enter the elements of first matrix: ";
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cout<<"Enter the element at position "<<i<<" "<<j<<": ";
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the elements of second matrix: ";
    for(int i=0; i<n3; i++)
    {
        for(int j=0; j<n4; j++)
        {
            cout<<"Enter the element at position "<<i<<" "<<j<<": ";
            cin>>arr2[i][j];
        }
    }

    if(n2 != n3)
    {
        cout<<"Multiplication is not possible";
        return 0;
    }

    int arr3[n1][n4];
    cout<<"Resultant matrix is: "<<endl;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n4; j++)
        {
            arr3[i][j] = 0;
            for(int k=0; k<n2; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
