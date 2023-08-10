class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
                return true;
            // edge case:
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low = low+1;
                high = high-1;
                continue;
            }
            // check for left sorted part:
            if(nums[low] <= nums[mid])
            {
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            // right part is sorted
            else
            {
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};