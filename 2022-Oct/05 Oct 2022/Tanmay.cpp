#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    getline(cin,s);
    
    int curLength = 0,maxLength=0;
    
    for(int i = 0;i<s.length();i++)
    {
        maxLength = max(curLength,maxLength);
        if(s[i]!= ' ')
        {
            curLength++;
        }
        else
        {
            curLength = 0;
        }
    }
    
    cout<<max(curLength,maxLength)<<endl;
    // cout<<s;
    
    return 0;
}
