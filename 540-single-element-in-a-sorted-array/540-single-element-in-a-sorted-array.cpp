class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Approach_02: Using Map: -> Time:O(nlogn) and Space:O(n)
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto i:mp){
            if(i.second  == 1)
                return i.first;
        }
        return -1;
    }
};