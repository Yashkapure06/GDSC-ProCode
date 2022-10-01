#include<iostream>
using namespace std;
int main()
{
    int i,j,n,alphabet;
    cout<<"enter the no.= ";
    cin>>n;
    for (i=0;i<=n;i++)
    {
        char alphabet ='A';
        for(j=0;j<i;j++)
        {
            cout<<alphabet++<<" ";
        }
        cout<<endl;

    }
}