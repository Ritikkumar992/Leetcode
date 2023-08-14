class Solution {
public:
    vector<vector<int>> allSubsets;
    void generate(vector<int>&subset, int i, vector<int>&nums)
    {
        if(i == nums.size()){
            allSubsets.push_back(subset);
            return;
        }
        // ith element is not in subset.
        generate(subset, i+1, nums);
        
        // ith element is in subset.
        subset.push_back(nums[i]);
        generate(subset, i+1, nums);
        subset.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> empty;
        generate(empty, 0, nums);
        return allSubsets;
    }
};