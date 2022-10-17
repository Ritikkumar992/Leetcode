class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;
        for(auto s:sentence){
            st.insert(s);
        }
        return st.size() == 26;
    }
};