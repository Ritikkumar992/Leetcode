class Solution {
    public
        void findCombination(int ind,int []arr, int target, List<Integer>ds,List<List<Integer>> ans){
        // base case:
        if(ind == arr.length){
            if(target == 0)
                ans.add(new ArrayList<>(ds));
            return;
        }
        // pick case:
        if(arr[ind]<=target){
            ds.add(arr[ind]);
            findCombination(ind,arr,target-arr[ind],ds,ans);
            ds.remove(ds.size()-1);
        }
        // not pick case:
        findCombination(ind+1,arr,target,ds,ans);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> ds = new ArrayList<>();
        
        findCombination(0,candidates,target,ds,ans);
        return ans;
    }
}