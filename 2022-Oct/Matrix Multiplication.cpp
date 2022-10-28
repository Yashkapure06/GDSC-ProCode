#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n,m,i,j;
	cin >> n >> m;
	int A[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	cin >> n >> m;
	int B[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> B[i][j];
		}
	}
	int C[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}
