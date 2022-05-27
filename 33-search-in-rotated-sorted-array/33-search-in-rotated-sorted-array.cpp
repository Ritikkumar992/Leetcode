class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Using Linear Search: Time:O(n) and Space:O(1)
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target)
                return i;
        }
        return -1;
    }
};