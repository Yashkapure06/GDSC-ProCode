#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[50];
	int i=0;
	cout<<"Enter a string ";
	cin>>str;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	cout<<"After conversion string is "<<str;
	return 0;
}
