class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++)
        {
            int moreNeeded = target - nums[i];
            if(mp.find(moreNeeded) != mp.end()){
                return {mp[moreNeeded], i};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};