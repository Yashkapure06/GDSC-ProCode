#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i,j,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        int flag=1;
        for(j=0;j<=(i/2);j++)
        {
            if(str[j]!=str[i-j])
                flag=0;
        }
        if(flag==1)
            count++;
    }
    cout<<"Total number of pallindrome words are : "<<count;
    return 0;
}
