#include <bits/stdc++.h>
using namespace std;
 
void comb(string input, string output)
{
    
    if (input.empty()) {
        cout << output << endl;
        return;
    }
 
    comb(input.substr(1), output + input[0]);
 
    comb(input.substr(1), output);
}
 
int main()
{
    string output = "";
    string input ;
    cin>>input;
 
    comb(input, output);
 
    return 0;
}
