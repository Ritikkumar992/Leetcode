class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, balance = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == 'R')
                balance++;
            else
                balance--;
            if(balance == 0)
                ans++;
        }
        return ans;
    }
};