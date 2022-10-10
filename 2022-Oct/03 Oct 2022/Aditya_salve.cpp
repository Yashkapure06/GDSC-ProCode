#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string[100];
    int length,i;
    cout<<"enter the string: ";
    cin>>string;
    length=strlen(string);
    for(int i=0;i<length;i++)
    {
             if(string[i]>=65 && string[i]<=97)
        {
            cout<<(char)(string[i]+32);
        }
        else
        {
        cout<<(char)(string[i]-32);
        }
    }
    return 0;
    }














