//Printing Alphabet pattern using For Loops.
//E.g.  E D C B A A B C D E
//        D C B A A B C D
//          C B A A B C
//            B A A B
//              A A 
#include<iostream>
using namespace std;

int main()
{   int n,i,j,a,c;
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    system("cls");
    cout<<"\n\n\n";

    cout<<"\n\n\nEnter no of Rows For Your Pattern :  ";
    cin>>n;
    a=n;
    c=n;
    cout<<"\n\n";

    for(j=0;j<c;j++)
    {
        for(i=0;i<j;i++)
        {cout<<"  ";                    }
        for(i=0;i<n;i++)
        {cout<<arr[a-1]<<" ";   a--;    }
        for(i=0;i<n;i++)
        {cout<<arr[i]<<" ";     a++;    }
        cout<<"\n";
        n--;
        a=n;
    }
    cout<<"\n\n\n";
    return 0;
}
// Code by -- Mayborg...