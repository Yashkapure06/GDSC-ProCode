# include <iostream>
using namespace std;
 
void rotate(int arr[], int n)
{
    int x = arr[0], i;
    for (i = 0; i <n-1; i++)
    {
    arr[i] = arr[i+1];
    }
    arr[n-1] = x;
}
 
int main()
{
    int i;
     int n;
     cin >> n;
     int arr[n];
     for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    rotate(arr, n);
 
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}
