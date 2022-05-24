class Solution {
public:
    int longestValidParentheses(string s) {
        //Using Stack: Time:O(n) and Space:O(n)
        int maxLen = 0;
        stack<int> st;
        st.push(-1);
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                    maxLen = max(maxLen, i-st.top());
            }
        }
        return maxLen;
    }
};