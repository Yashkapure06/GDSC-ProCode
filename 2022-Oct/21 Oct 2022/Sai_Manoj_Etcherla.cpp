# include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> v(n);
	vector<vector<int>> a(n, v), b(n, v), ans(n, v);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> b[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				ans[i][j] += a[i][k] * b[k][j];
			}
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	
	
	return 0;
}