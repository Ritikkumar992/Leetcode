class Solution {
    public void moveZeroes(int[] nums) {
        //approach_01: using two pointer.
        int i = 0;
        for(int n:nums){
            if(n != 0){
                nums[i] = n;
                i++;
            }
        }
        for(int x = i;x<nums.length;x++){
            nums[x] = 0;
        }
    }
}