class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        
        int n = nums.size(),low = 0,high= n-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] > target){
                high = mid-1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else
            {
                if(mid == low || nums[mid] != nums[mid-1]){
                    ans[0] = mid;
                    break;
                }
                else{
                    high = mid-1;
                    ans[0] = mid-1;
                }
            }
        }
        low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] > target){
                high = mid-1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else
            {
                if(mid == high || nums[mid] != nums[mid+1]){
                    ans[1] = mid;
                    break;
                }
                else{
                    low = mid+1;
                    ans[1] = mid+1;
                }
            }
        }
        return ans;
    }
};