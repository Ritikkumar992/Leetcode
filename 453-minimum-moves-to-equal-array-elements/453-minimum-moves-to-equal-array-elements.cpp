class Solution {
public:
    int minMoves(vector<int>& nums) {
        //Approach: Using maths:
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int mn = *min_element(nums.begin(),nums.end());
        
        return sum-mn*n;
    }
};