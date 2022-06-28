class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int deletecnt = 0;
        unordered_set<int>st;
        for(int i = 0;i<26;i++)
        {
            while(freq[i] && st.find(freq[i]) != st.end()){
                freq[i]--;
                deletecnt++;
            }
            st.insert(freq[i]);
        }
        return deletecnt;
    }
};