class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Approach_03: using two-pointer 
        int i = 0; // lastnon-zero index;
        //put all the non zero ele at the begining:
        for(auto it:nums){
            if(it != 0){
                nums[i] = it;
                i++;
            }
        }
        //fill the remaining array with 0's
        for(int x = i;x<nums.size();x++){
            nums[x] = 0;
        }
    }
};