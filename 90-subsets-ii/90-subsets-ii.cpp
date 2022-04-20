class Solution {
    // Time : O(2^n * n) and space: O(2^n) * O(k)
public:
    void findSubset(int ind, vector<int>&nums, vector<int>&ds, vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i = ind;i<nums.size();i++)
        {
            if(i != ind && nums[i] == nums[i-1])
                continue;
            ds.push_back(nums[i]);
            findSubset(i+1,nums,ds, ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // creating ans vector to store our ans.
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findSubset(0,nums,ds,ans);
        return ans;
    }
};