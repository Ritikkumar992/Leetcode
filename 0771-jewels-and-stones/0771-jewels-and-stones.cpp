class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        unordered_set<char> st(jewels.begin(), jewels.end());
        for(char s:stones)
        {
            if(st.count(s))
                cnt++;
        }
        return cnt;
    }
};