# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
		ll n;
		cin >> n;
		vector<string> v(n);
		unordered_map<string, int> mp;
		
		for(ll i = 0; i < n; i++){
			cin >> v[i];
			mp[v[i]]++;
		}
		
		ll m;
		cin >> m;
		vector<string> b(m);
		vector<string> ans;
		
		for(ll i = 0; i < m; i++){
			cin >> b[i];
			if(mp.find(b[i]) != mp.end() && mp[b[i]] > 0){
				ans.push_back(b[i]);
				mp[b[i]]--;
			}
		}
		
		sort(ans.begin(), ans.end());
		for(ll i = 0; i < ans.size(); i++){
			if(i == ans.size() - 1)cout << " " << ans[i];
			else if(i == 0)cout << ans[i] << ",";
			else cout << " " << ans[i] << ",";
		}
		cout << "\n";
	return 0;
}