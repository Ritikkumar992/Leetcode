class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int>negative;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] < 0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int i = 0, j =0;
        while(i<nums.size()/2 && j< nums.size()/2)
        {
            ans.push_back(positive[i++]);
            ans.push_back(negative[j++]);
        }
        return ans;
    }
};