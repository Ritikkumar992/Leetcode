class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        // brute force: using sorting time:O(nlogn) and space:O(n)
        List<Integer> ans = new ArrayList<>();
        Arrays.sort(nums);
        for(int i =0;i<nums.length-1;i++){
            if(nums[i] == nums[i+1]){
                ans.add(nums[i]);
            }
        }
        return ans;
    }
}