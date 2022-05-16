class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Approach 02: using Set but doesn't work in constant space:
        unordered_set<int> seen;
        for(auto &i:nums)
        {
            if(seen.count(i))
                return i;
            seen.insert(i);
        }
        return -1;
    }
};