class Solution {
    public int findDuplicate(int[] nums) {
        //binarySearch: time:O(nlogn) and space:O(1)
        int low = 1, high = nums.length-1;
        int duplicate = -1;
        while(low <= high)
        {
            int curr = (low+high)/2;
            int cnt = 0;
            for(int n:nums){
                if(n <= curr){
                    cnt++;
                }
            }
            if(cnt > curr){
                duplicate = curr;
                high = curr-1;
            }
            else{
                low = curr+1;
            }
        }
        return duplicate;
    }
}