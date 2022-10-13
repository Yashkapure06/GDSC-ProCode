#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i,a[n],b[m],j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> ans;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) 
        {
            if(b[j]==a[i]) ans.push_back(a[i]);
        }
    }
    cout<<"Common Elements in Both arrays are: ";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}