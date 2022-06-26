// Recursive Solution
// Time complexity : O(N*(2^N))
// Space complexity : O(N*(2^N))
class Solution {
public:
    void sub(vector<int> &nums, int i, vector<int> temp,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        sub(nums, i+1, temp,ans);
        temp.push_back(nums[i]);
        sub(nums, i+1, temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;       
        sub(nums, 0, temp,ans);
        return ans;
    }
};