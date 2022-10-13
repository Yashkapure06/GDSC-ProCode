#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s1,s2;
    cin>>s1>>s2;
    
    int flag = 0;
    
    if(s1.length() != s2.length())
    {
        flag = 1;
    }
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(s1 != s2)
        flag = 1;
    
    if(flag !=0)
        cout<<"False"<<endl;
    else 
        cout<<"True"<<endl;
    
    return 0;
}
