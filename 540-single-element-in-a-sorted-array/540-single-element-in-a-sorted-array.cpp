class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Approach_03: Using XOr operation -> Time:O(n) and Space:O(1)
        int ele = 0;
        for(int i = 0;i<nums.size();i++){
            ele = ele^nums[i];
        }
        return ele;
    }
};