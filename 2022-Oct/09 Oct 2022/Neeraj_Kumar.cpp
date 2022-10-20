#include<bits/stdc++.h>
using namespace std;
void power_set(string s,int n) {
    vector<string> sub;
    int power;

    power=pow(2,n);
    for(int i=0;i<power;i++){
        string sset="";

        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sset+=s[j];
            }
        }
        sub.push_back(sset);
    }
    sort(sub.begin(),sub.end());
    int len=sub.size();
    for(int i=0;i<len;i++){
        cout<<sub[i]<<" ";
    }

    return;
}
string duplicate(string s){
    if(s.size()==0){
        return "";
    }


    string x="";
    int n=s.size(),i=0;
    x+=s[0];
    for(int j=1;j<n;j++){
        if(x[i]!=s[j]){
            i++;
            x+=s[j];
        }
    }
    return x;
}
int main() {
    string S;
    cin>>S;
    sort(S.begin(),S.end());
    S=duplicate(S);
    power_set(S, S.size());

    return 0;
}
