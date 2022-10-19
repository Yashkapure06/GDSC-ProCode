# include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main(){
	
	int n, d;
	cin >> n >> d;
	vector<int> v(n), b(n);
	
	for(ll i = 0; i < n; i++){
		cin >> v[i];
	}
	
	d %= n;
 
    int k = 0;
    for (int i = d; i < n; i++) {
        b[k] = v[i];
        k++;
    }

    for (int i = 0; i < d; i++) {
        b[k] = v[i];
        k++;
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
	
	return 0;
}