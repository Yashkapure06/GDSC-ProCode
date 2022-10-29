#include <iostream>
using namespace std;

int solve(int arr[], int n){
    if(n==1 || arr[0]>arr[1])
    return 1;
    if(arr[n-1]>arr[n-2])
    return n;
    
    for(int i=1; i<n-1; i++)
    if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
    return i+1;
    
    return -1;
}

bool check(int index, int arr[], int n){
    if(index==1 and n==1)
    return true;
    
    if(index==1 and arr[0]>arr[1])
    return true;
    
    if(index==n and arr[n-1]>arr[n-2])
    return true;
    
    if(arr[index-1]>arr[index-2] and arr[index-1]>arr[index])
    return true;
    
    return false;
}

int main() {
    cout << "Enter the size of array" << endl;
    int n; cin >> n;
    int arr[n];
    cout << "Enter elements of array" << endl;
    for(int i=0; i<n; i++)
    cin >> arr[i];
    
    int index = solve(arr, n);
    if(index!=-1)
    cout << "Possible Index of Peak element is : " << index << endl;
    else
    cout << "No Peak element found " << endl;
    
    cout << "Output: ";
    if( index!=-1 and check(index, arr, n)) cout << 1 << endl;
    else cout << 0 << endl;
}