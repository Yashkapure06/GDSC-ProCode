#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n, 0);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<"\nElements before rotation: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";


    int firstElement = arr[0];
    arr.erase(arr.begin());
    arr.push_back(firstElement);

    cout<<"\nElements after rotation: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";


    return 0;
}