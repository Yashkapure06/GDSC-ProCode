#include <bits/stdc++.h>
using namespace std;


// Function to check whether string is a palindrome
bool is_palindrome(string str){
    if(str.length() == 0) return true;
    int left_ptr = 0, right_ptr = str.length() - 1;
    while(left_ptr < right_ptr){
        if(str[left_ptr] != str[right_ptr]){
            return false;
        }
        left_ptr++;
        right_ptr--;
    }
    return true;
}

// Main function
int main(){
    // int testCase;
    // cin >> testCase;
    // int testCaseCounter = 0;
    /**
     * @brief Main function to test the function is_palindrome
     * @param[in] string
     * @note Type Control KEY (CTRL) + C to Quit ==> [^C] || Uncomment the above variables and add testCase instead of true 
     *       to test the function is_palindrome for n number of times
     */
    while(true){
        // testCaseCounter++;
        string str;
        cin >> str;
        // cout<<"Case: #" << testCaseCounter<<": ";
        if(is_palindrome(str)){
            cout<<"Palindrome";
        }else{
            cout<<"Not Palindrome";
        }
        cout<<endl;
    }

    return 0;
}