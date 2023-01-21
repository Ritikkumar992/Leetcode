class Solution {
    public int[] twoSum(int[] nums, int target) {
        //brute force: time-> o(n^2) and space:O(n)
        int n = nums.length;
        int x = 0;
        int []arr = new int[2];
        
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    arr[x++] = i;
                    arr[x++] = j;
                    // x++;
                }
            }
        }
        return arr;
    }
}