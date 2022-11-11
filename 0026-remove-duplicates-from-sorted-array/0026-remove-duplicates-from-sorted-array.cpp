class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //using two pointer: Time:O(n) and space:O(1)
        if(nums.size() == 0){
            return 0;
        }
        int i = 0;
        for(int j =1;j<nums.size();j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};