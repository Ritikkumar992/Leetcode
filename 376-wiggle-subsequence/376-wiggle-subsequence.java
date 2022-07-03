class Solution {
    public int wiggleMaxLength(int[] nums) {
        //Approach_02: Using Greedy: Time:O(n) and space:O(1)
        if(nums.length<2)
            return nums.length;
        int prevdiff = nums[1]-nums[0];
        int cnt = prevdiff != 0 ? 2:1;
        for(int i=2;i<nums.length;i++)
        {
            int diff = nums[i]-nums[i-1];
            if((diff>0 && prevdiff<=0) || (diff<0 && prevdiff>=0)){
                cnt++;
                prevdiff = diff;
            }
        }
        return cnt;
    }
}