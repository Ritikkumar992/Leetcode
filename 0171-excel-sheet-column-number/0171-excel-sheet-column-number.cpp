class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char s:columnTitle)
        {
            char c = s - 'A'+1;
            ans = ans*26 + c;
        }
        return ans;
    }
};