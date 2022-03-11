class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //Time : O(N) and Space: O(N)
    vector<int> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
   	 if (mp.find(target - nums[i]) != mp.end()) {
   		 res.emplace_back(i);
   		 res.emplace_back(mp[target - nums[i]]);
   		 return res;
   	 }
   	 mp[nums[i]] = i;
    }
    return res;
    }
};