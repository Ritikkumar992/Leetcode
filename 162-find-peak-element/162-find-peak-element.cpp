class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //Approach_01:Linear Scan: Time:O(n) and Space:O(1)
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            if(nums[i] > nums[i+1])
                return i;
        }
        return n-1;
    }
};