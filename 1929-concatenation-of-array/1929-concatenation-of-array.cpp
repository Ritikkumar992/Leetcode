class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // ans array declaration:
        int n = nums.size();
        vector<int> ans(2*n);
        
        // logic: O(2*n);
        for(int i = 0;i<n;i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        
        return ans;
    }
};