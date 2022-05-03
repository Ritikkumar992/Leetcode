class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //Brute force:
        int end = -1;
        int max = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(max > nums[i]){
                end = i;
            }else{
                max = nums[i];
            }
        }
        int start = 0;
        int min = nums[nums.size()-1];
        for(int i = nums.size()-2;i>=0;i--){
            if(nums[i]>min){
                start = i;
            }else{
                min = nums[i];
            }
        }
        return end-start+1;
    }
};