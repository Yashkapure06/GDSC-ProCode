class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
         for(int i=0;i<s.length();i++)
         {
             char ch = s[i];
             
             if(ch>='A' and ch<='Z')
             {
                 ans.push_back(tolower(ch));
             }
             else if(ch>='a' and ch<='z')
             {
                 ans.push_back(ch);
             }
             else 
             {
                 ans.push_back(ch);
             }
         }
        return ans;
    }
};

class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
         for(int i=0;i<s.length();i++)
         {
             char ch = s[i];
             
             if(ch>='A' and ch<='Z')
             {
                 ans.push_back(tolower(ch));
             }
             else if(ch>='a' and ch<='z')
             {
                 ans.push_back(ch);
             }
             else 
             {
                 ans.push_back(ch);
             }
         }
        return ans;
    }
};
