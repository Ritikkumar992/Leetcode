class Solution {
    public int[] searchRange(int[] nums, int target) {
        //Brute force: Time:O(n)+O(n) and Space:O(1)
        int n = nums.length;
        // int []ans = new int[2];
        int ans[] = {-1,-1};
        for(int i = 0;i<n;i++){
            if(nums[i] == target){
                ans[0] = i;
                break;
            }
        }
        for(int j = n-1;j>=0;j--){
            if(nums[j] == target){
                ans[1] = j;
                break;
            }
        }
        return ans;
    }
}