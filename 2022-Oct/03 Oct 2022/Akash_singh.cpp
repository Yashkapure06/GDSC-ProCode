#include <bits/stdc++.h>
using namespace std;
 

void solve(string& s)
{
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
           s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
           s[i] = s[i] + 32;
        }
    }
}
 

int main()
{
    string s = "MyNAmeIsTESting";
    
    solve(s);
 
    cout << s;
    // output = mYnaMEiStesTING
    return 0;
}