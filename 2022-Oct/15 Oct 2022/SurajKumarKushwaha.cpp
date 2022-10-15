#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &arr, int d){
    int n = arr.size();
    vector<int> ans(n);

    d%=n;
    
    for(int i=0; i<n; i++)
    ans[i] = arr[(i+d)%n];

    return ans;
}

int main(){

    //input part
    int n, d; cin >> n >> d;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    cin >> arr[i];

    vector<int> ans = solve(arr, d);
    
    //output part
    cout << "Output: ";
    for(auto i: ans)
    cout << i << " ";
    cout << endl;
}