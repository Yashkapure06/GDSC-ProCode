#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int count = 0;
    
    for(int i = 0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
    
    return 0;
}
