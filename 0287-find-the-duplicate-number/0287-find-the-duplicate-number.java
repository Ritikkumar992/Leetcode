class Solution {
    public int findDuplicate(int[] nums) {
        // time:O(n) and space:O(n)
        Map<Integer,Integer> mp = new HashMap<>();
        for(int i = 0;i<nums.length;i++){
            if(mp.containsKey(nums[i])){
                return nums[i];
            }
            else{
                mp.put(nums[i],1);
            }
        }
        return -1;
    }
}