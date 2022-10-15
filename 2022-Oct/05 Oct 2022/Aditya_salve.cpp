#include<iostream>
#include<cstring>
using namespace std;
int main()
{
cout<<"Enter the string :"<<endl;
string longest,word;
cin>>word;
longest=word;
while(cin>>word){
    if(word.size()>longest.size())
    longest=word;
    else
    break;
}
   cout<<"The longest word entered was "<<longest<<" with a length of "<<longest.size()<<endl;
   return 0;
}
