class Solution {
    public int subarraySum(int[] nums, int k) {
        int cnt = 0, sum = 0;
        for(int i = 0;i<nums.length;i++){
            sum = nums[i];
            if(k == sum)
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