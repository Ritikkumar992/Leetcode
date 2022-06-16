class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Brute force: Using Sorting: TIme"O(nlongn)
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};