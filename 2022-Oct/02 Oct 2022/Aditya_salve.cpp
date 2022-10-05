#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char string[20];
    int  length,i;
    int upper=0;
    cout<<"Enter the string: ";
    cin>>string;
    cout<<endl;
    scanf("%[^'\n]s",string);
    length=strlen(string);
    for(int i=0;i<length;i++)
    {
    if(string[i]>=65 && string[i]<=90)
    {
        upper=upper+1;
    }
    
    }
    cout<<"Capital Letters are: "<<upper<<endl;
    return 0;
}
