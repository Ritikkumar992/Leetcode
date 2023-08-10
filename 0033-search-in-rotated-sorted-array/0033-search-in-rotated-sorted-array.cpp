class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(nums[mid] == target){
                return mid;
            }
            // left sorted part:
            if(nums[low] <= nums[mid])
            {
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            // right sorted part;
            else
            {
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};