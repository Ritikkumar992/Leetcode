class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int,int> mp;
        
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]]++;
            
            if(mp[nums[i]] == int(n/3)+1){
                ans.push_back(nums[i]);
            }
            if(ans.size() == 2)
                break;
        }
        return ans;
    }
};