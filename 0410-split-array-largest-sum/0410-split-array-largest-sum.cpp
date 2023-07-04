class Solution {
public:
    bool isPossible(vector<int>&arr, int mid, int k)
    {
        int cnt = 1, sum = 0;
        for(int i = 0;i<arr.size();i++)
        {
            sum += arr[i];
            if(sum > mid){
                cnt++;
                sum = arr[i];
            }
        }
        return cnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low  = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int ans = 0;
        
        if(k == nums.size())
            return low;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(isPossible(nums, mid, k) == true){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};