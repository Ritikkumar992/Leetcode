class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        // Optimised Apporach..
        int mx = *max_element(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(),nums.end(),0);
        
        if(m == nums.size()){
            return mx;
        }
        int low = mx;
        int high = sum;
        int ans  = 0;
        
        while(low <= high){
            int mid = low + (high-low) /2;
            
            if(isPossible(nums,mid, m) == true){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    public:
     bool isPossible(vector<int>&nums, int mid, int m){
         int sa = 1;
         int sum = 0;
         
         for(int i = 0;i<nums.size();i++){
             sum += nums[i];
         if(sum > mid){
             sa++;
             sum = nums[i];
         }
        }
         return sa <= m;
     }
};