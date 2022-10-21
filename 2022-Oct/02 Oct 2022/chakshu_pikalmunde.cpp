#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;getline(cin, s);
	int n=s.size();
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z'){
			ans++;
		}
	}
	cout<<ans<<"\n";
}
