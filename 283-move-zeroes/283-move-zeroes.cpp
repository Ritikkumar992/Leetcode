class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Apporach_01: without usign in-place:
        vector<int> res;
        for(auto it:nums)
        {
            if(it!= 0)
                res.push_back(it);
        }
        for(auto it:nums)
        {
            if(it == 0)
                res.push_back(it);
        }
        nums = res;
    }
};