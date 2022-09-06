class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        int cnt = 0;
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto m:mp){
            if(m.second > n)
                return m.first;
        }
        return -1;
    }
};