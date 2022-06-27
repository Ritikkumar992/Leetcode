class Solution {
    private:
    void findPermutation(vector<int>& nums,vector<int>&ds, int freq[],vector<vector<int>> &ans){
        // base case:
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        // main logic:
        for(int i= 0;i<nums.size();i++){
            if(!freq[i]){
                freq[i] = 1;
                ds.push_back(nums[i]);
                findPermutation(nums,ds,freq,ans);
                ds.pop_back();
                freq[i] = 0;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // Approach_01: Time:n!*n and Space:O(n)+O(n)
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i =0;i<nums.size();i++)
            freq[i] = 0;
        findPermutation(nums,ds,freq,ans);
        return ans;
    }
};