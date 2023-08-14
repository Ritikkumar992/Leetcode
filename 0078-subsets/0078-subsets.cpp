class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        
        for(int num:nums) // 1 2 3
        {
            int n = ans.size();
            for(int j = 0;j<n;j++){
                // step_01: copy list:
                vector<int> temp = ans[j];
                temp.push_back(num);
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};