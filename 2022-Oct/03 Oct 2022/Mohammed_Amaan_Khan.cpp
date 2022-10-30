#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(std::cin, s);
    for(auto &i : s){
        // cause the difference between 'A' & 'a' is 32 in ASCII Table
        if(i >= 'a' && i <= 'z')i = (char)((int)i-32);
        else if(i >= 'A' && i <= 'Z')i = (char)((int)i+32);
    }
    cout<<s<<endl;
    return 0;
}