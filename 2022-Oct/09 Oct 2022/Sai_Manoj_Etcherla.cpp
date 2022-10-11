# include <bits/stdc++.h>
using namespace std;

vector<string> v;
map<string, int> mp;
string ans = "";

void generateAll(string s, int i){
	if(i >= s.length()){
		return;
	}
	ans += s[i];
	generateAll(s, i + 1);
	if(mp.find(ans) == mp.end()){
		v.push_back(ans);
		mp[ans] = 1;
	}
	ans.pop_back();
	generateAll(s, i + 1);
	if(mp.find(ans) == mp.end()){
		v.push_back(ans);
		mp[ans] = 1;
	}
}

int main(){
	string s;
	cin >> s;
	generateAll(s, 0);
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << "\n";
	return 0;
}