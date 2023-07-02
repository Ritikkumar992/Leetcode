class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Brute force;
        int n = nums.size();
        vector<int> ans;
        for(int i =0;i<n;i++)
        {
            if(ans.size() == 0 || ans[0] != nums[i])
            {
                int cnt = 0;
                for(int j = 0;j<n;j++){
                    if(nums[i] == nums[j]){
                        cnt++;
                    }
                }
                if(cnt > (n/3)){
                    ans.push_back(nums[i]);
                }
            }
            if(ans.size() == 2)
                break;
        }
        return ans;
    }
};