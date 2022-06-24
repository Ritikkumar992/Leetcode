class Solution {
    public int findDuplicate(int[] nums) {
        // Approach_03: Using Binary Seacrh : TIme:O(nlogn) and Space:O(1)
        int low = 0, high = nums.length;
        int duplicate = -1;
        
        while(low<=high)
        {
            int cur = (low+high)/2;
            int cnt = 0;
            for(int num:nums){
                if(num <= cur)
                    cnt++;
            }
            if(cnt > cur){
                duplicate = cur;
                high = cur-1;
            }else{
                low = cur+1;
            }
        }
        return duplicate;
    }
}