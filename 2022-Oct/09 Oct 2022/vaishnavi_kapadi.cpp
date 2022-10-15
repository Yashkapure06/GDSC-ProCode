/*Accept a string from user and Print all Cobinations of it
Input : str1 = "ABC"
Output : "ABC AB AC A BC B C   "

Input : str1 = "AB"
Output : "AB A B  "


Input : str1 = "A"
Output : "A  "*/


#include<bits/stdc++.h>
using namespace std;

void generate_all_subsets(string &s, int index, vector<char> &subset)
{
    int n = s.size();

    if(index == n)
    {
        for(int i=0; i<subset.size(); i++)
        {
            cout<<subset[i];
        }
        cout<<endl;
        return;
    }

    subset.push_back(s[index]);
    generate_all_subsets(s, index+1, subset);

    
    subset.pop_back();
    generate_all_subsets(s, index+1, subset);
}

int main()
{
    cout<<"Enter the string:";
    string s;
    cin>>s;
    cout<<"Possible Combination:";
    vector<char> subset;
    generate_all_subsets(s, 0, subset);
    return 0;
}