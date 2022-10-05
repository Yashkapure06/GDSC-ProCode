class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
	for(char c:s) 
		m[c]++;
	for(char c:t){
		if(m[c]>=0) m[c]--;
		else return false;
	}
	for(auto it : m)
		if(it.second!=0) 
            return false;
	return true;
    }
};
