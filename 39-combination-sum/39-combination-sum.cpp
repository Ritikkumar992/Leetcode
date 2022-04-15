class Solution {
    // Time : 2^k * k.
    // Space: k * x
public:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>>&ans, vector<int> &ds)
    {
        //base case:
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up the element:
        if(arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind, target-arr[ind], arr, ans, ds);
            
            ds.pop_back();
        }
        //not pick an element;
        findCombination(ind+1, target, arr, ans, ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // creating vector of vector to store our ans:
        vector<vector<int>> ans;
        //creating a vector to store a particular combination:
        vector<int> ds;
        findCombination(0,target,candidates, ans, ds);
        
        return ans;
    }
};