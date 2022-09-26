#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the no.= ";
    cin>>n;
    for (i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j+i-1<<" ";
        }
        cout<<endl;

    }
}