#include<iostream>
using namespace std;
void pypart(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}

int main()
{
    int n=5;
    pypart(n);
    return 0;
}
