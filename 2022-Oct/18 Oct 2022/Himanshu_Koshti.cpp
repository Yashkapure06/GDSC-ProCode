#include <iostream>

using namespace std;

int main(){
    int size;
    // Taking size input
    cout<<"Enter the size: ";
    cin>>size;

    int arr[size][size];
    // Taking array input
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }

    // Transposing the matrix
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(i!=j)
                swap(arr[i][j], arr[j][i]);
        }
    }

    // Printing the matrix
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}