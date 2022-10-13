#include <iostream>
using namespace std;

void count(string str)
{
    
    int upper=0 , lower=0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z' )
            upper++;
        else if(str[i]>='a' && str[i]<='z')
            lower++;
    }
    
    cout<<" Total Upper case letters are: "<<upper<<endl;
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    count(str);

    return 0;
}

