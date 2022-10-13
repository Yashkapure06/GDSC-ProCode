#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void changeCase(string& str){
    for (int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z'){
           str[i] = str[i] + 32;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
}

int main(){
     // int testCase;
    // cin >> testCase;
    // int testCaseCounter = 0;
    /**
     * @brief Main function to test the function changeCase
     * @note Type Control KEY (CTRL) + C to Quit ==> [^C] || Uncomment the above variables and add testCase instead of true 
     *       to test the function is_palindrome for n number of times
     */
    while(true){
        // testCaseCounter++;
        string str;
        getline(cin, str);
        // cout<<"Case: #" << testCaseCounter<<": ";
        changeCase(str);
        cout<<str;
        cout<<endl;
    }

    return 0;
}