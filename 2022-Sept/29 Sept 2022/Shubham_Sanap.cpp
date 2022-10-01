#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,l,alphabet,c,b;
    cout<<"enter the no.= ";
    cin>>n;
    
    for (i=n;i>=1;i--)
    {
        char alphabet ='z';
        for (j=1;j<=i;j++)
        {
              cout<<alphabet--<<" ";
                  
        }
        cout<<endl;
         
    }
}