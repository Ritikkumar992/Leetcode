class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Approach_02: Two Pointer + 2 sum:
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        for(int i = 0;i<n-2;i++)
        {
            if(i == 0 || (i>0 && nums[i] != nums[i-1]))
            {
                int lo = i+1, hi = n-1, sum = 0 - nums[i];
                while(lo<hi)
                {
                    if(nums[lo]+nums[hi] == sum){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        res.push_back(temp);
                        
                        // to avoid the duplicate element:
                        while(lo<hi && nums[lo] == nums[lo+1])lo++;
                        while(lo<hi && nums[hi] == nums[hi-1])hi--;
                        
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi] > sum)
                        hi--;
                    else
                        lo++;
                }
            }
        }
        return res;
    }
};