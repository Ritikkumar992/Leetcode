class Solution {
    public int maxSubArray(int[] nums) {
        // Kadane's algorithm: Time:O(n) and Space:O(1)
        int mx = Integer.MIN_VALUE;
        int sum = 0;
        for(int i= 0;i<nums.length;i++){
            sum += nums[i];
            mx = Math.max(sum,mx);
            if(sum<0)
                sum = 0;
        }
        return mx;
    }
}