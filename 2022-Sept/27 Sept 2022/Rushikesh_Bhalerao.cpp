#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){

        for(j=1;j<=i;++j){
            char ch='A';
            cout<<char(ch+j-1)<<" ";
        }
        
        cout<<endl;
    }
}
