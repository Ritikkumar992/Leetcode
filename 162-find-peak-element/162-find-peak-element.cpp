class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(nums[i] == mx)
                return i;
            
        }
        return -1;
    }
};