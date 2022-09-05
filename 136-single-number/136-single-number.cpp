class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto i:mp){
            if(i.second == 1)
                return i.first;
        }
        return -1;
    }
};