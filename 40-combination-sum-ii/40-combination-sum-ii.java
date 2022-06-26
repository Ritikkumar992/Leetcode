class Solution {
    public
        void findCombination(int ind, int []arr, int target,List<List<Integer>>ans, List<Integer>ds){
        if(target == 0){
            ans.add(new ArrayList<>(ds));
            return;
        }
        for(int i = ind;i<arr.length;i++){
            if(i>ind && arr[i] == arr[i-1])
                continue;
            if(arr[i]>target)
                break;
            ds.add(arr[i]);
            findCombination(i+1,arr,target-arr[i],ans,ds);
            ds.remove(ds.size()-1);
        }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> ds = new ArrayList<>();
        findCombination(0,candidates,target,ans,ds);
        return ans;
    }
}