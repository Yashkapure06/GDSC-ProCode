#include <bits/stdc++.h>
using namespace std;

int maxlenWord(string &s){
    int cnt=0, maxCnt=0;
    for (int i=0;i<s.size();i++){
        maxCnt=max(maxCnt, cnt);
        if (s[i]!=' ') cnt++;
        else cnt=0;        
    }
    maxCnt=max(maxCnt, cnt);
    return maxCnt;
}
int main(){
    string s1;
    getline(cin, s1);
    cout<<maxlenWord(s1);
    return 0;
}
