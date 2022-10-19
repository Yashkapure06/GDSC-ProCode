/* Problem Statement : 13 Oct 2022
Accept array from user and rotate it from left by one place
arr[] = {1, 2, 3, 4, 5, 6, 7,}
Output:2 3 4 5 6 7 1 

Input: arr[] = {3, 4, 5, 6, 7, 1, 2}
Output: 4 5 6 7 1 2 3 */

#include <iostream> 

using namespace std; 

int main() 
{ 

int n; 

cout << "Enter the size of the array "; 

cin >> n; 

int arr[n]; 

for (int i = 0; i < n; i++) 

{ 

cout << "Enter the elements "; 

cin >> arr[i]; 

} 

int temp; 

temp = arr[0]; 

for (int i = 0; i < n-1; i++) 

{ 

arr[i] = arr[i + 1]; 

} 

arr[n-1] = temp; 

for (int i = 0; i < n; i++) 

{ 

cout << arr[i] << " "; 

} 

return 0; 

}