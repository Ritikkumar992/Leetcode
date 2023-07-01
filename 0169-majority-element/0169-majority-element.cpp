class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // //Brute force:
        // for(int i =0;i<nums.size();i++)
        // {
        //     int cnt = 0;
        //     for(int j = i;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             cnt++;
        //         }
        //         if(cnt > nums.size()/2){
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;
        
        // using map:
        unordered_map<int,int> mp;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto m:mp){
            if(m.second> nums.size()/2){
                return m.first;
            }
        }
        return -1;
    }
};