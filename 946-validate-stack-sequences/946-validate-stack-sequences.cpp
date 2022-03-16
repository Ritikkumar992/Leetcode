class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j = 0;
        
        for(auto e:pushed){
            st.push(e);
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
        }
        return j == popped.size();
    }
};