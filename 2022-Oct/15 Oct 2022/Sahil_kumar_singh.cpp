#include "iostream"
using namespace std;

void rotate(int arr[], int n){
    int key = arr[0];
    for(int i=0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = key;

}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;

    while(d--){
        rotate(arr, n);
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
