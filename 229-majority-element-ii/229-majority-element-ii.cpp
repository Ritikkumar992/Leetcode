class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto m:mp){
            if(m.second>nums.size()/3)
                ans.push_back(m.first);
        }
        return ans;
    }
};