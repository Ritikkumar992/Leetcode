class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>pos;
        if(!binary_search(nums.begin(),nums.end(),target))
        {
            pos.push_back(-1);
            pos.push_back(-1);
        }
        else{
        pos.push_back(lower_bound(nums.begin(),nums.end(),target)-nums.begin());
        pos.push_back(upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1);
        }
        return pos;
    }
};