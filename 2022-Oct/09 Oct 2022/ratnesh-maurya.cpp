

#include <iostream> 
#include <string.h> 
using namespace std; 

void swap(char* A, char* B) 
{ 
	char temp; 
	temp = *A; 
	*A = *B; 
	*B = temp; 
} 

void permute(char* c, int l, int r) 
{ 
	int i; 
	if (l == r) 
		cout<<c<<endl; 
	else
	{ 
		for (i = l; i <= r; i++) 
		{ 
			swap((c+l), (c+i)); 
			permute(c, l+1, r); 
			swap((c+l), (c+i)); 
		} 
	} 
} 

int main() 
{ 
	char str[100]; 
    cin>>str;
	int n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
}