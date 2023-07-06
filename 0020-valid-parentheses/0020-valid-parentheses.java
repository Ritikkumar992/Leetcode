class Solution {
    public boolean isValid(String s) {
        Stack<Character> st =  new Stack<>();
        
        for(int i =0;i<s.length();i++)
        {
            if(s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[')
            {
                st.push(s.charAt(i));
            }
            else
            {
                if(st.isEmpty())
                    return false;
                if(s.charAt(i) == ')' && st.peek() != '(')
                    return false;
                if(s.charAt(i) == '}' && st.peek() != '{')
                    return false;
                if(s.charAt(i) == ']' && st.peek() != '[')
                    return false;
                st.pop();
            }
        }
        if(st.isEmpty())
            return true;
        return false;
    }
}