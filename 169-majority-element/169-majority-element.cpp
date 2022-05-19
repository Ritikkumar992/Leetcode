class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Approach_02 : Using HashMap Time:O(nlogn) and Space:O(n)
        int n = nums.size();
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second > n/2)
                return it.first;
        }
        return -1;
    }
};