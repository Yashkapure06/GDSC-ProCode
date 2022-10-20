#include<iostream>
using namespace std;

int main(){
    int n;  
    cout<<"Enter size of the array";
    cin>>n;
    int first[n][n],second[n][n];
    cout<<"\nEnter First array";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>first[i][j];
        }
    }
    cout<<"\nEnter Second array";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>second[i][j];
        }
    }
    cout<<"\n\nResult:\n";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<first[i][j]+second[i][j]<<" ";
        }
        cout<<endl;
    }
}
