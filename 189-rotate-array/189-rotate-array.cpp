class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Approach_01:using reverse method:
        int n = nums.size();
        k = k%n;
        //step1: reverse the first n-k elements:
        reverse(nums.begin(),nums.begin()+n-k);
        //step2: reverse the last k elements:
        reverse(nums.begin()+n-k, nums.end());
        //step3: reverse the whole array:
        reverse(nums.begin(),nums.end());
    }
};