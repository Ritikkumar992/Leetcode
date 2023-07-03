class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            // left part is sorted;
            if(nums[low] <= nums[mid])
            {
                ans = min(ans, nums[low]);
                low = mid+1; // eliminate left part.
            }
            // right part is sorted.
            else
            {
                ans = min(ans, nums[mid]);
                high = mid-1; // elminate right half.
            }
        }
        return ans;
    }
};