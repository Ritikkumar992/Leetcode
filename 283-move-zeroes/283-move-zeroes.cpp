class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Approach_02: Space-optimal:
        int cnt0 = 0;
        for(auto it:nums){
            if(it == 0)
                cnt0++;
        }
        // retain the original position of non-zero element;
        vector<int>res;
        for(auto it:nums){
            if(it != 0)
                res.push_back(it);
        }
        //move all zeroes to the end:
        while(cnt0--){
            res.push_back(0);
        }
        nums = res;
    }
};