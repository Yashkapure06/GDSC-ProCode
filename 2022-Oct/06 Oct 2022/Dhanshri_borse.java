class Solution {
    public String reverseWords(String s) {
       
    Stack<Character> st=new Stack<>();
        StringBuilder sb=new StringBuilder();
        
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)!=' ')
            {
                st.push(s.charAt(i));
            }
            else
            {
                while(!st.isEmpty())
                {
                    sb.append(st.peek());
                    st.pop();
                }
                sb.append(" ");
            }
        }
        
         while(!st.isEmpty())
                {
                    sb.append(st.peek());
                    st.pop();
                }
               
        
        return sb.toString();
        
    }
}
