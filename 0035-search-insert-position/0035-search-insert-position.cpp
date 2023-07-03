class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), low = 0, high = n-1;
        
        int ans = n;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};