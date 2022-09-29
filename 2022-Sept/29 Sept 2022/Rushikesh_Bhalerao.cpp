#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            char ch='z';
            if(j<=n-i+1){
            cout<<char(ch-j+1)<<" ";}
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
