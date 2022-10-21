#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> &arr, vector<vector<int>> &brr){
    int n = arr.size();

    vector<vector<int>> ans(n,vector<int>(n));

    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    ans[i][j] = arr[i][j]+brr[i][j];

    return ans;
}

void takeInput(vector<vector<int>> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin >> arr[i][j];
}
int main(){
    cout << "Enter size of Matrix" << endl;
    int n; cin >> n;
    vector<vector<int>> arr(n,vector<int>(n)),brr(n,vector<int>(n));
    
    cout << "Enter elements of first Matrix" << endl;
    takeInput(arr);
    cout << "Enter elements of second Matrix" << endl;
    takeInput(brr);

    vector<vector<int>> ans = solve(arr,brr);
    cout << "Sum of two Matrix: " << endl;
    for(auto i: ans)
    {
        for(auto j: i)
        cout << j << " ";
        cout << endl;
    }

}