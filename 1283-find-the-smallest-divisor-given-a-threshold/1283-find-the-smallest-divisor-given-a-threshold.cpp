class Solution {
public:
    int Divisor(vector<int>&arr, int threshold, int value)
    {
        int ans = 0;
        for(int i =0;i<arr.size();i++)
        {
            ans += ceil(double(arr[i]) / (double)(value));
        }
        return ans;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = -1;
        
        // linear search:
        // for(int i = 1;i<= high;i++)
        // {
        //     if(Divisor(nums,threshold, i) <= threshold){
        //         return i;
        //     }
        // }
        // return -1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(Divisor(nums,threshold, mid) <= threshold){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};