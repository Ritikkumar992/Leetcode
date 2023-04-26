class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> st = new Stack<>();
        
        for(int i = 0;i<s.length();i++){
            char ch = s.charAt(i);
            
            // if we have opening bracket 
            if(ch == '('){
                st.push(ch);
            }
            // if we have closing bracket then we have to check for the peek of the stack for the opening bracket. 
            else{
                if(st.size() > 0 && st.peek() == '('){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
        return st.size();
    }
}