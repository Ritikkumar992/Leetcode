class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //using two pointer approach:
        int i = 0;
        for(int j = 1;j<nums.size();j++)
        {
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};