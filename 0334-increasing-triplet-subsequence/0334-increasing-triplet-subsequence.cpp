class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int small = INT_MAX, large = INT_MAX;
        for(auto num:nums)
        {
            if(num <= small)
                small = num;
            else if(num <= large)
                large = num;
            else
                return true;
        }
        return false;
    }
};