#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }//create new array
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        if(l==0){
            cout << prefix_sum[r] << endl;
        }else{
            cout << prefix_sum[r]-arr[l-1] << endl;
        }
    }
}
