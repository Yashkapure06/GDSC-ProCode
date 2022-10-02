#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	string ss=s;
	reverse(ss.begin(),ss.end());
	if(s==ss){
	    cout<<"Palindrome\n";
	}
	else{
	    cout<<"NOT Palindrome\n";
	}
}
