#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  int c=0;
  getline(cin,s);
  int l=s.length();
  for(int i=0;i<l;i++)
  {
    if(s[i]!=' ')
    {
      int k=i;
      while(s[k]!=' '&&k<l)
      {
        k++;
      }
      bool flag=true;
      int j=i;
      int e=k-1;
      while(j<=e)
      {
        if(s[j]!=s[e])
        {
          flag=false;
          break;
        }
        j++;
        e--;
      }
      if(flag)
        c++;
      i=k;
    }
  }
  cout<<c;
}
    