#include <bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    unordered_map<char, int> letters;
    for(int i = 0; i < str1.length(); i++){
        letters[str1[i]]++;
    }
    for(int i = 0; i < str2.length(); i++){
        letters[str2[i]]--;
    }
    for(auto letter: letters){
        if(letter.second != 0){
            cout << "False" << endl;
            return 0;
        }
    }

    cout << "True" << endl;

    return 0;
}