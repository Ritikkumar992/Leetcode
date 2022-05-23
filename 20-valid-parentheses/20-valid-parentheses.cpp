class Solution {
public:
    bool isValid(string s) {
        //Approach _01: Using Stack Time: O(n) and Space:O(1)
        stack<char> st;
        for(auto c:s){
            if(c == '(' || c == '[' || c == '{')
                st.push(c);
            else
            {
                if(st.empty())
                    return false;
                if(c == ')' && st.top() != '(')
                    return false;
                if(c == '}' && st.top() != '{')
                    return false;
                if(c == ']' && st.top() != '[')
                    return false;
                st.pop();
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};