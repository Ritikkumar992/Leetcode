class Solution {
    public int findDuplicate(int[] nums) {
        // Approach_03: Using Negative marking : TIme:O(n) and Space:O(1)
        int duplicate = -1;
        for(int i =0;i<nums.length;i++)
        {
            int cur = Math.abs(nums[i]);
            if(nums[cur]<0){
                duplicate = cur;
                break;
            }
            else{
                nums[cur] *= -1;
            }
        }
        return duplicate;
    }
}