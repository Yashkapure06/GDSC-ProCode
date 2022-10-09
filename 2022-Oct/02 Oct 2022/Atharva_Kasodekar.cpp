#include <iostream>
using namespace std;

int main()
{
    string str = "CoDing MET";
    int l = str.length();
    int count = 0;
    for(int i=0;i<l;i++){
        if(str[i]>=65 && str[i]<=90){
            count++;
        }
    }
    cout<<count;
}