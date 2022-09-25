//Printing Star pattern using For Loops.
//E.g. * 
//     * *
//     * * *
//     * * * *
//     * * * * *
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    system("cls");
    cout<<"\n\n\n";

    cout<<"\n\n\nEnter no of Rows For Your Pattern :  ";
    cin>>n;
    cout<<"\n\n";

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    cout<<"\n\n\n";

    return 0;
}

// Code by -- Mayborg....
