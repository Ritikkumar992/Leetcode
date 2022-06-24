class Solution {
    public void sortColors(int[] nums) {
        // Approach_1: using counting method: Time:O(n) and SpaceO(n)
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(int num:nums){
            if(num == 0)
                cnt0++;
            if(num == 1)
                cnt1++;
            if(num == 2)
                cnt2++;
        }
        int i = 0;
        while(cnt0!=0){
            nums[i++] = 0;
            cnt0--;
        }
        while(cnt1!=0){
            nums[i++] = 1;
            cnt1--;
        }
        while(cnt2 != 0){
            nums[i++] = 2;
            cnt2--;
        }
    }
}