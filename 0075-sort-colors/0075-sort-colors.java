class Solution {
    public void sortColors(int[] nums) {
        //counting sort:
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(int n:nums){
            if(n == 0)
                cnt0++;
            else if(n == 1)
                cnt1++;
            else
                cnt2++;
        }
        int i = 0;
        while(cnt0 != 0){
            nums[i] = 0;
            i++;
            cnt0--;
        }
        while(cnt1 != 0){
            nums[i] = 1;
            i++;
            cnt1--;
        }
        while(cnt2 != 0){
            nums[i] = 2;
            i++;
            cnt2--;
        }
    }
}