//25-09-2022
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1;i<(n+1);i++){
        for (int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }cout<<"\n";
    }
    return 0;
}