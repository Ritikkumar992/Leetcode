class Solution {
    public int findDuplicate(int[] nums) {
        // Approach_01: Using Sorting : TIme:O(nlogn) and Space:O(nlogn)
        Arrays.sort(nums);
        for(int i = 1;i<nums.length;i++){
            if(nums[i] == nums[i-1])
                return nums[i];
        }
        return -1;
    }
}