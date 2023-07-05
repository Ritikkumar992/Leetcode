class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int i = n-1;
        string ans = "";
        while(i>=0)
        {
            if(num[i]%2 != 0){
                ans += num[i];
            }
            if(num[i]%2 == 0 && ans[0]%2 != 0){
                ans += num[i];
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};