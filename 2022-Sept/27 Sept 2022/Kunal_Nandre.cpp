#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    cout<<"Enter no of Rows For Your Pattern :  ";
    cin>>n;
    cout<<"\n\n";

    for(j=0;j<n;j++)
    {
        for(i=0;i<=j;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n\n";

    return 0;
}
