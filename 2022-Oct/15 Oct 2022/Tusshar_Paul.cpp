#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int d,int length)
{
	int k=0;
	int temp[length];
	for (int i = d; i < length; i++) 
	{
		temp[k] = arr[i];
		k++;
	}
     for (int i = 0; i < d; i++) 
     {
		temp[k] = arr[i];
		k++;
	}
	for (int i = 0; i < length; i++) {
		arr[i] = temp[i];
	}
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
    }

int main()
{
    int arr[7];//initialised array
    int length,i,d;
    length=sizeof(arr)/sizeof(int);
    cin>>d;
    for(i=0;i<length;i++)
    {
    	cin>>arr[i];
    }
    shift(arr,d,length); //passing value to formal parameter
    return 0;

}

/*
Input:2
      3 4 5 6 7 1 2

Output :5 6 7 1 2 3 4 

*/