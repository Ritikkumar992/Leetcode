class Solution {
    public int subarraySum(int[] nums, int k) {
        //Brute force: time:O(n^2) and Space:O(1)
        int cnt = 0;
        for(int i =0;i<nums.length;i++){
            int sum = nums[i];
            if(sum == k)
                cnt++;
            for(int j = i+1;j<nums.length;j++){
                sum += nums[j];
                if(sum == k)
                    cnt++;
            }
        }
        return cnt;
    }
}