class Solution {
public:
    int maxDepth(string s) {
        // Time;O(n) and space:O(n)
        stack<char> st;
        int mx = 0, cnt = 0;
        
        for(int i =0;i<s.size();i++)
        {
            if(s[i] == '('){
                st.push('(');
                cnt++;
            }
            else if(s[i] == ')' && st.size() > 0){
                mx = max(mx, cnt);
                cnt--;
                st.pop();
            }
        }
        return mx;
    }
};