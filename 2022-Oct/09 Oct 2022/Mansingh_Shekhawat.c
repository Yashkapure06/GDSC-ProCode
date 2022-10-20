#include<stdio.h>
#include<string.h>
void print(char * str, int i, int n) 
{ 
    if (i == n) 
    { 
        printf("%s\n", str); 
        return; 
    } 
    str[i] = '0'; 
    print(str, i + 1, n); 
    str[i] = '1'; 
    print(str, i + 1, n); 
} 
int main() 
{ 
    char str[100]; 
    scanf("%s", str); 
    int n = strlen(str); 
    print(str, 0, n); 
    return 0; 
}
