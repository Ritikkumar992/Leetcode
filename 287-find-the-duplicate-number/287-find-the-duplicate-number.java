class Solution {
    public int findDuplicate(int[] nums) {
        int low = 1, high = nums.length-1;
        int duplicate = -1;
        while(low <= high)
        {
            int cur = (low+high)/2;
            int cnt = 0;
            for(int i:nums){
                if(i<=cur)
                    cnt++;
            }
            if(cnt>cur){
                duplicate = cur;
                high = cur-1;
            }
            else{
                low = cur+1;
            }
        }
        return duplicate;
    }
}