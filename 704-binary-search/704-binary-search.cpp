class Solution {
public:
    int search(vector<int>& nums, int target) {
        // inerar search:Time:O(n) and space:(1)
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target)
                return i;
        }
        return -1;
    }
};