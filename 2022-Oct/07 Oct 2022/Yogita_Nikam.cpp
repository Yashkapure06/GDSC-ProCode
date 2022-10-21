class Solution {
public:

        int expandAroundCenter(string s, int left, int right){
        int n = s.size();
        int start = left, end = right;
        
        while(start >= 0 && end < n && s[start] == s[end] ){
            start--;
            end++;
        }
        
        return end-start-1;
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        
        if(n<=1) return s;
        
        int start =0, end=0;
        
        for(int i=0; i<n; i++){
            //odd
            int len1 = expandAroundCenter(s, i, i);
            //even
            int len2 = expandAroundCenter(s, i, i+1);
            
            int len = max(len1, len2);
            
            //update start and end if palindrome length is greater
            if(len > end-start+1){
                start = i - (len-1)/2;
                end = i + len/2;
            }
                        
        }
        
        return s.substr(start, end-start+1);
    }
}
