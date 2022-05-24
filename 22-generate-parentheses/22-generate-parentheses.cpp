class Solution {
    vector<string> result;
    void helper(int open, int close, int n, string current)
    {
        if(current.size() == 2*n){
            result.push_back(current);
            return;
        }
        if(open < n)
            helper(open+1, close, n, current+"(");
        if(close < open)
            helper(open, close+1,n,current+")");
    }
public:
    vector<string> generateParenthesis(int n) {
        helper(0,0,n,"");
        return result;
    }
};