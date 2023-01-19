class Solution {
    public int findDuplicate(int[] nums) {
        //negativ marking method: time"O(n) and space:O(1)
        for(int i = 0;i<nums.length;i++){
            int curr = Math.abs(nums[i]);
            if(nums[curr] < 0)
                return curr;
            else
                nums[curr] *= -1;
        }
        return -1;
    }
}