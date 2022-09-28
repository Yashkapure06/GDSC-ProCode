//Printing Number pattern using For Loops.
//E.g. 1 
//     2 3
//     3 4 5 
//     4 5 6 7
//     5 6 7 8 9
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

    for(j=0;j<n;j++)
    {
        for(i=0;i<=j;i++)
        {
            cout<<1+i+j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n\n";

    return 0;
}

// Code by -- Mayborg....