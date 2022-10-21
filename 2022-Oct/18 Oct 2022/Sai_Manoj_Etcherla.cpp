# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	
	int n;
	cin >> n;
	
	vector<int> v(n);
	vector<vector<int>> a(n, v);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			swap(a[i][j], a[j][i]);
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	
	
	return 0;
}