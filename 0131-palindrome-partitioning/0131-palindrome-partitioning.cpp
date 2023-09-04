class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    void solve(int index, string &s, vector<string>& res, vector<vector<string>>& ans){
        if(index == s.size()){
            ans.push_back(res);
            return;
        }
        for(int i = index;i<s.size();i++){
            if(isPalindrome(s,index, i)){
                res.push_back(s.substr(index, i-index+1));
                solve(i+1, s, res, ans);
                res.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> res;
        solve(0, s, res, ans);
        return ans;
    }
};