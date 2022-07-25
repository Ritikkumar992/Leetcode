class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //Brute force: Time:O(n)+O(n) and Space:O(1)
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
        }
        for(int j = n-1;j>=0;j--){
            if(nums[j] == target){
                ans.push_back(j);
                break;
            }
        }
        if(ans.size()!=0)
            return ans;
        return {-1,-1};
        
    }
};