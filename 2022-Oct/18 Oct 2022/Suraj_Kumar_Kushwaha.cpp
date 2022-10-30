#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout << "Enter size of matrix" << endl;
    int n;cin >> n;
    int mat[n][n];
    
    cout << "Enter elements of matrix" << endl;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin >> mat[i][j];

   int k=0;
   while(k<n){
     int t=k;
     while(t<n){
        swap(mat[k][t],mat[t][k]);
        ++t;
     }
     ++k;
   }
   cout << "Output : " << endl;

   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
    cout << mat[i][j] << " ";
    cout << endl;
   }
}