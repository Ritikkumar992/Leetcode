class Solution {
public:
    void sortColors(vector<int>& nums) {
        //counting sort:Time:O(n) + O(n)
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        
        for(auto &it:nums)
        {
            if(it == 0)
                cnt0++;
            else if(it == 1)
                cnt1++;
            else
                cnt2++;
        }
        int i =0;
        while(cnt0--){
            nums[i] = 0;
            i++;
        }
        while(cnt1--){
            nums[i] = 1;
            i++;
        }
        while(cnt2--){
            nums[i] = 2;
            i++;
        }
    }
};