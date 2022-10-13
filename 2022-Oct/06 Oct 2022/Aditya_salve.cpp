#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int i,k=0;
char ch[25];
cout<<"enter the string: ";
cin>>ch;
for(i=0;ch[i]!='\0';i++){
    k++;
}
cout<<"reverse string is: ";
for(i=k-1;i>=0;i--){
    cout<<ch[i];
}
return 0;
}
