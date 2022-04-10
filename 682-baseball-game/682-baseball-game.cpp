class Solution {
public:
    int calPoints(vector<string>& ops) {
        //using stack:
        int value1 = 0, value2 = 0;
        stack<int> st;
        
        for(auto i:ops)
        {
            if(i == "C"){
                st.pop();
            }
            else if(i == "D"){
                st.push(st.top()*2);
            }
            else if(i == "+"){
                value1 = st.top();
                st.pop();
                value2 = st.top();
                st.push(value1);
                st.push(value1+value2);
            }
            else{
                st.push(stoi(i));
            }
        }
        int ans = 0;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};