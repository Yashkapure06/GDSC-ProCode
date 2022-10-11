#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int len = str.length();

    for(int i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
    }
    cout<<str;
}