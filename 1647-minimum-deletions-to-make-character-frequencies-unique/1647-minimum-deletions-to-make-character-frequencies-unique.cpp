class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26,0);
        for(int i = 0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        int deleteCnt = 0;
        unordered_set<int> st;
        for(int i = 0;i<26;i++){
            while(freq[i] > 0 && st.find(freq[i]) != st.end()){
                freq[i]--;
                deleteCnt++;
            }
            st.insert(freq[i]);
        }
        return deleteCnt;
    }
};