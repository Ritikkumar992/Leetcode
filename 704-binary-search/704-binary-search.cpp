class Solution {
public:
    int search(vector<int>& nums, int target) {
        // binary search: Time:(logn) and Space:O(1)
        int start = 0, end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end-start) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target){
                start = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
        }
        return -1;
    }
};