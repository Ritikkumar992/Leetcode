class Solution {
public:
    void solve(int ind, int tar,vector<int>&arr, vector<int>& ds,vector<vector<int>>&ans)
    {
        // base case:
        if(ind == arr.size()){
            if(tar == 0){
                ans.push_back(ds);
            }
            return;
        }
        // pick case:
        if(arr[ind] <= tar){
            ds.push_back(arr[ind]);
            solve(ind, tar-arr[ind],arr,ds,ans);
            ds.pop_back();
        }
        // non-pick case:
        solve(ind+1,tar,arr,ds,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, target, candidates,ds, ans);
        return ans;
    }
};