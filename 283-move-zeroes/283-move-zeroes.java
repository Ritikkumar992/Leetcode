class Solution {
    public void moveZeroes(int[] nums) {
        int i = 0;
        for(int it:nums){
            if(it != 0){
                nums[i] = it;i++;
            }
        }
        for(int x = i;x<nums.length;x++){
            nums[x] = 0;
        }
    }
}