//Solution to Problem of 16/10/2022
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m[4][4];
	int n[4][4];
	int result[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>m[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>n[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{
      for(int j=0;j<4;j++)
      {
      	result[i][j]=m[i][j]+n[i][j];
      }
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
/*INPUT: 
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

OUTPUT:
2 2 2 2 
4 4 4 4 
6 6 6 6 
8 8 8 8 
*/