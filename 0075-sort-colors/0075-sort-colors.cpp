class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(auto num:nums){
            if(num == 0)
                cnt0++;
            else if(num == 1)
                cnt1++;
            else
                cnt2++;
        }
        nums.clear();
        while(cnt0--){
            nums.push_back(0);
        }
        while(cnt1--){
            nums.push_back(1);
        }
        while(cnt2--){
            nums.push_back(2);
        }
    }
};