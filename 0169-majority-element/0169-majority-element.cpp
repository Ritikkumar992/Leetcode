class Solution {
public:
    int majorityElement(vector<int>& v) {
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
        // unordered_map<int,int> mp;
        // for(auto num:nums){
        //     mp[num]++;
        // }
        // for(auto m:mp){
        //     if(m.second> nums.size()/2){
        //         return m.first;
        //     }
        // }
        // return -1;
        
        // Approach_03: 
        int n = v.size(), cnt = 0, ele;
        for(int i = 0;i<n;i++){
            if(cnt == 0){
                cnt = 1;
                ele = v[i];
            }
            else if(ele == v[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i = 0;i<n;i++){
            if(v[i] == ele){
                cnt1++;
            }
        }
        if (cnt1 > (n / 2)) return ele;
        return -1;
    }
};