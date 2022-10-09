#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string word){
    string copy = word;
	reverse(copy.begin(), copy.end());
	return (copy==word);
}
string solve(string s)
{
    
    string ans,word;
 
    int len, ans_length = 0;
    for (int i = 0; i < s.size(); i++){
        char c = s[i];
        if (c != ' ')
            word = word + c;
        else {
            len = word.size();
            if (Palindrome(word) && len > ans_length){
                ans_length = len;
                ans = word;
            }
            word = "";
        }
    }

	// last word will be exculded from above loop so check seperately
	len = word.size();
	if (Palindrome(word) && len > ans_length){
		ans_length = len;
		ans = word;
	}
    return ans;
}
int main()
{
    string s;
    getline(cin,s);
	string ans = solve(s);
    cout<<"longest pallindrome is "<<ans<<"\n";
}
