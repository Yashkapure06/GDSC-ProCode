#include<iostream>
using namespace std;

int main(){
    cout << "Enter the size of matrix" << endl;
    int n; cin >> n;
    int arr[n][n],brr[n][n], res[n][n];
    cout << "Enter element of first matrix" << endl;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin >> arr[i][j];

    cout << "Enter elements of second matrix" << endl;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin >> brr[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            res[i][j]=0;
            for(int k=0; k<n; k++)
            res[i][j] += arr[i][k]*brr[k][j];
        }
    }

    cout << "Output: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        cout << res[i][j] << " ";
        cout << endl;
    }
}