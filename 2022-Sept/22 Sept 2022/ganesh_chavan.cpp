// Problem Statement : 22 Sept 2022

// Accept a number from user & print the pattern
// Input : 4    3   
// Output :
/*
    *   *   *
    *   *   *
    *   *   *
    *   *   *
*/ 

#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter no of column & rows : ";
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<"* ";
        cout<<"\n";
    }
    
    return 0;
}
