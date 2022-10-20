include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
 
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i][i];
        }
        
        for(int i = 0,j = n-1; i<n && j>=0; i++,j--){
            if(i==j){
                continue;
            }else{
                sum += arr[i][j];
            }
        } 
        cout << "Sum: " << sum;
    
}
