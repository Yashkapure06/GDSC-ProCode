Given an array of integers. Find the pair in an array that has a minimum XOR value. 

Examples : 

Input : arr[] =  {9, 5, 3}
Output : 6
        All pair with xor value (9 ^ 5) => 12, 
        (5 ^ 3) => 6, (9 ^ 3) => 10.
        Minimum XOR value is 6

Input : arr[] = {1, 2, 3, 4, 5}
Output : 1 


// C++ program to find minimum XOR value in an array.
#include <bits/stdc++.h>
using namespace std;

// Returns minimum xor value of pair in arr[0..n-1]
int minXOR(int arr[], int n)
{
	int min_xor = INT_MAX; // Initialize result

	// Generate all pair of given array
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)

			// update minimum xor value if required
			min_xor = min(min_xor, arr[i] ^ arr[j]);

	return min_xor;
}

// Driver program
int main()
{
	int arr[] = { 9, 5, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << minXOR(arr, n) << endl;
	return 0;
}
