class Solution {
public:
    bool isValid(string s) {
        //Using Stack: : Time:O(n) and space:O(n)
        stack<char> st;
        for(auto it:s){
            if(it == '(' || it == '[' || it == '{')
                st.push(it);
            else
            {
                if(st.empty())
                    return false;
                if(it == ')' && st.top() != '(')
                    return false;
                if(it == ']' && st.top() != '[')
                    return false;
                if(it == '}' && st.top() != '{')
                    return false;
                st.pop();
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};