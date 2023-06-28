class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // ans array declaration:
        int n = nums.size();
        vector<int> ans;
        
        // logic:
        for(int i = 0;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0;i<n;i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};