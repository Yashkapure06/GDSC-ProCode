//25-09-2022
#include<iostream>
using namespace std;

int main(){
    string alpha; int num;
    cout<<"Enter The number :";
    cin>>num;
    alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i=0;i<(num);i++)
    {
        for (int j=0;j<(i+1);j++)
        {
            cout<<alpha[j]<<" ";
        }cout<<endl;
    }
    return 0;
}