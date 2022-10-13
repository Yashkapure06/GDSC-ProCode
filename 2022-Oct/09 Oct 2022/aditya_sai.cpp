#include<bits/stdc++.h>
using namespace std;
  
void printsub(string str)
{
    int n = str.length();
    unsigned int opsize = pow(2, n);
    for(int c=1;c<opsize;c++)
    {
        string subs = "";
        for (int j = 0; j < n; j++)
        {
            if (c & (1<<j))
                subs.push_back(str[j]);
        }
        do
        {
            cout<<subs<< " ";
        }
        while(next_permutation(subs.begin(),subs.end()));
    }
}

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;
    printsub(str);
    return 0;
}
