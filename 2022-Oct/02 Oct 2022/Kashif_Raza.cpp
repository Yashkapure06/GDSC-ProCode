#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int countUpperCase(string str){
    int ans = 0;
    for (int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            ans++;
        }
    }
    return ans;
}

int main(){
     // int testCase;
    // cin >> testCase;
    // int testCaseCounter = 0;
    /**
     * @brief Main function to test the function countUpperCase
     * @note Type Control KEY (CTRL) + C to Quit ==> [^C] || Uncomment the above variables and add testCase instead of true 
     *       to test the function is_palindrome for n number of times
     */
    while(true){
        // testCaseCounter++;
        string str;
        getline(cin, str);
        // cout<<"Case: #" << testCaseCounter<<": ";
        cout<<countUpperCase(str);
        cout<<endl;
    }

    return 0;
}