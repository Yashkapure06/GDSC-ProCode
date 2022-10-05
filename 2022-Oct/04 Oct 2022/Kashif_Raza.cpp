#include <bits/stdc++.h>
using namespace std;

// Brute Force
bool is_anagram_brute(string str1, string str2){

    if(str1.length() != str2.length()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]) 
            return false;
    }
    return true;
}

// Time Complexity wise
bool is_anagram(string str1, string str2){

    if(str1.length() != str2.length()) return false;
    // To get the characters and their frequencies in string 1
    unordered_map<char, int> map;
    for(int i = 0; i < str1.length(); i++){
        if(map.find(str1[i]) != map.end()){
            map[str1[i]] += 1;
        }else{
            map[str1[i]] = 1;
        }
    }
    // If the character is present then decrement the frequency of character by 1
    // else if the character is not present then it is obvious that the character
    // is distinct hence not anagram
    for(int i = 0; i < str2.length(); i++){
        if(map.find(str2[i]) != map.end()){
            map[str2[i]] -= 1;
        }else if(map[str2[i]] < 0){
            return false;
        }
    }
    // Check if the frequency is more
    for(auto it : map){
        if(it.second > 0){
            return false;
        }
    }
    return true;
}

int main(){
     // int testCase;
    // cin >> testCase;
    // int testCaseCounter = 0;
    /**
     * @brief Main function to test the function is_anagram and is_anagram_brute
     * @note Type Control KEY (CTRL) + C to Quit ==> [^C] || Uncomment the above variables and add testCase instead of true 
     *       to test the function is_palindrome for n number of times
     */
    while(true){
        // testCaseCounter++;
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);
        // cout<<"Case: #" << testCaseCounter<<": ";
        if(is_anagram_brute(str1, str2)){
            cout<<"True";
        }else{
            cout<<"False";
        }
        cout<<endl;
    }

    return 0;
}