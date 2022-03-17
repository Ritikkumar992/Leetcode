class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Time:O(N)
        int l = -1, r = -1;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                if(l == -1)
                    l = i;
                r = i;
            }
        }
        return {l,r};
    }
};