#include <bits/stdc++.h>
using namespace std;
int maxlen(string s){
    int count=0, maxcount=0;
    for (int i=0;i<s.size();i++){
        maxcount=max(maxcount, count);
        if (s[i]!=' ') count++;
        else count=0;        
    }
    maxcount=max(maxcount, count);
    return maxcount;
}
int main(){
    string s1;
    getline(cin, s1);
    cout<<maxlen(s1);
    return 0;
}
