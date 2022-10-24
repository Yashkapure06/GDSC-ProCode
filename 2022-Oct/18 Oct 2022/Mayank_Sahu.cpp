#include<bits/stdc++.h>

using namespace std;
// - Accept  n size  2D array from user and convet row into column and viceversa <br>


int main(){
    int n,m;
    cout<<"Enter the size of row and column of 2D array"<<endl;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the element of "<<i<<" row and "<<j<<" column"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"the actual 2D array is"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
    

    int ans[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][i]=arr[i][j];
        }
    }
    cout<<"The convered 2D array is"<<endl;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;

}

// - Accept  n size  2D array from user and convet row into column and viceversa <br>

// ```
// Input:  int A[N][N] = { { 1, 1, 1, 1 },
//                     { 2, 2, 2, 2 },
//                     { 3, 3, 3, 3 },
//                     { 4, 4, 4, 4 } };
 
// Output:
//       1 2 3 4 
//       1 2 3 4 
//       1 2 3 4 
//       1 2 3 4 
      
// ------------------------------------------------

// Input:  int A[N][N] = { { 1, 2, 3, 2 },
// 			{ 2, 1, 2, 3 },
// 			{ 2, 3, 1, 3 },
// 			{ 2, 3, 4, 5 } };

	     
// Output:
//       1 2 2 2 
//       2 1 3 3 
//       3 2 1 4 
//       2 3 3 5 


