class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int []res = new int[2];
        Map<Integer,Integer> mp = new HashMap<>();
        for(int i = 0;i<n;i++){
            if(mp.containsKey(target - nums[i])){
                res[1] = i;
                res[0] = mp.get(target-nums[i]);
                return res;
            }
            else{
                mp.put(nums[i],i);
            }
        }
        return res;
    }
}