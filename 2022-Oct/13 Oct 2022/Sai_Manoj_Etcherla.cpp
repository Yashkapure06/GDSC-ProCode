# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	
	int n;
	cin >> n;
	vector<int> v(n + 1);
	
	for(ll i = 0; i < n; i++){
		cin >> v[i];
	}
	
	v[n] = v[0];
	
	for(ll i = 0; i <= n; i++){
		v[i] = v[i + 1];
	}
	
	v.pop_back();
	
	for(ll i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << "\n";
	
	return 0;
}