#include<bits/stdc++.h>
using namespace std;

int countCapital(string s) {
    int cnt = 0;
    for(auto &i : s) {
        if(i >= 'A' && i <= 'Z')cnt++;
    }
    return cnt;
}

int main(){
    string s;
    getline(std::cin, s);
    cout<<countCapital(s)<<endl;
    return 0;
}