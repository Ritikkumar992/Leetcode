class Solution {
    private void findPermutation(int[]nums,List<Integer>ds,boolean []freq,List<List<Integer>> ans){
        // base case:
        if(ds.size() == nums.length){
            ans.add(new ArrayList<>(ds));
            return;
        }
        // main logic:
        for(int i= 0;i<nums.length;i++){
            if(!freq[i]){
                freq[i] = true;
                ds.add(nums[i]);
                findPermutation(nums,ds,freq,ans);
                ds.remove(ds.size()-1);
                freq[i] = false;
            }
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        // Approach_01: Time:n!*n and Space:O(n)+O(n)
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> ds = new ArrayList<>();
        boolean []freq = new boolean[nums.length];
        findPermutation(nums,ds,freq,ans);
        return ans;
    }
}