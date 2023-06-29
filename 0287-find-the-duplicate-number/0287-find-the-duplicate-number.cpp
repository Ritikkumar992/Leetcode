class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto num:nums)
        {
            int cur = abs(num);
            if(nums[cur] < 0){
                return cur;
            }
            else{
                nums[cur] *= -1;
            }
        }
        return -1;
    }
};