#include<bits/stdc++.h>
using namespace std;
// 3 Aprroaches by Mohammed Amaan Khan

// Checking every character
bool isAnagram(string s, string t) {
    bool ret = false;
    if (s.size() != t.size())return ret;
    for(int i = 0; i<t.size(); i++){
        int index = s.find(t[i]);
        if(index != string::npos){
            ret = true;
         // deleting the found char to avoid duplicate comparison
            s.erase(index,1);
        }else{
            ret = false;
            break;
        }
    }
    return ret;
}
    
// HashMap Approach
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    int n = s.size();
    unordered_map<char, int> counts;
    for (int i = 0; i < n; i++) {
        counts[s[i]]++;
        counts[t[i]]--;
    }
    for (auto count : counts)
        if (count.second) return false;
    return true;
}
    
// Sorting Approach
bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return t == s;
}

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<(isAnagram(s1, s2) ? "True" : "False")<<endl;
    return 0;
}
