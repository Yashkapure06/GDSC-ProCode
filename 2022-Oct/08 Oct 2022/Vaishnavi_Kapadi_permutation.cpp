/*Accept a string from user and Print all permutations of it
Input : str1 = "ABC"
Output : "ABC ACB BAC BCA CAB CBA"

Input : str1 = "AB"
Output : "AB BA"

Input : str1 = ""
Output : ""*/

#include <bits/stdc++.h>

#include <string>
using namespace std;
  
void permute(string s, 
             string answer)
{
    if(s.length() == 0)
    {
        cout << answer << "  ";
        return;
    }
    for(int i = 0; 
            i < s.length(); i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0, i);
        string right_substr = s.substr(i + 1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch);
    }
}
  
// Driver code
int main()
{
    string s;
    string answer = "";
  
    cout << "Enter the string : ";
    cin >> s;
  
    cout << 
    "All Permutation is : ";
    permute(s, answer);
    return 0;
}