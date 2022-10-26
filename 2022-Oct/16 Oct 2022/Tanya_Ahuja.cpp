#include<iostream>
using namespace std;
int main(){
    int A[50][50], B[50][50], C[50][50];
    cout<<"Enter values in first matrix";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter values in second matrix";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout<<"The sum of two arrays is";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
    }
    return 0;
}
