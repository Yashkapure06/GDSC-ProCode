#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ss;
	cin>>s>>ss;
	sort(s.begin(),s.end());
	sort(ss.begin(),ss.end());
	if(s==ss){
		cout<<"ANAGRAM\n";
	}
	else{
		cout<<"NOT ANAGRAM\n";
	}
}
