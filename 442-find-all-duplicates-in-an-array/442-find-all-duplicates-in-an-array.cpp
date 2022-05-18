class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // Approach_01: using sorting: Time:O(nlogn) and Space:O(n)
        sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
                res.push_back(nums[i]);
        }
        return res;
    }
};