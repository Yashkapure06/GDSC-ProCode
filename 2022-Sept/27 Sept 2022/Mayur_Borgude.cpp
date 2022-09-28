//Printing Alphabet pattern using For Loops.
//E.g. A 
//     A B
//     A B C 
//     A B C D
//     A B C D E
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    system("cls");
    cout<<"\n\n\n";

    cout<<"\n\n\nEnter no of Rows For Your Pattern :  ";
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

// Code by -- Mayborg....
