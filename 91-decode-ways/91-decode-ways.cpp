class Solution {
public:
    int numDecoding_memo(string& s, int n, vector<int>& dp){
        if(n == 0)
            return dp[n]  = 1;
        if(dp[n] != -1)
            return dp[n];
        int cnt = 0;
        // check for one-digit;
        if(s[n-1] != '0')
            cnt += numDecoding_memo(s,n-1,dp);
        // check for two-digit:
        if(n>1 && stoi(s.substr(n-2,2)) >= 10 && stoi(s.substr(n-2,2)) <= 26)
            cnt += numDecoding_memo(s,n-2,dp);
        return dp[n] = cnt;
    }
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        int ans = numDecoding_memo(s,n,dp);
        return ans;
    }
};