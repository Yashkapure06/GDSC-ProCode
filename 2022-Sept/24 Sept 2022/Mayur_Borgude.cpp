//Printing cubic Sequence using For loop.
// E.g : 1 1 1 1 1
//       2 2 2 2 2
//       3 3 3 3 3
//       4 4 4 4 4
//       5 5 5 5 5
#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int last ,i=1,j,n=1;

    cout<<"\n\n\n\n\n\n";

    cout<<"\n\tEnter the end Element of your pattern :\t";
    cin>>last;

    cout<<"\n\n\n";

    for(i=0;i<last;i++)
    {
        for(int j=1;j<=last;j++)
        {
            cout<<n<<" ";
        }
        cout<<"\n";
        n++;
    }
    
    cout<<"\n\n\n\n";

    return 0;
}
// Code by - Mayborg