#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int length)
{
    int first=arr[0];
	for(int i=0;i<length;i++)
	{
	 arr[i]=arr[i+1]; // shifting by one place
	}
	arr[length-1]=first; //setting first value of array to last
	for(int j=0;j<length;j++)
	{
		cout<<arr[j]<<" ";
	}
}
int main()
{
    int arr[7];//initialised array
    int length,i;
    length=sizeof(arr)/sizeof(int);
    for(i=0;i<length;i++)
    {
    	cin>>arr[i];
    }
    shift(arr,length); //passing value to formal parameter
    return 0;

}

/*
Input:3 4 5 6 7 1 2

Output :4 5 6 7 1 2 3

*/