class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algorithm: TIme: O(n) and Space:O(1)
        int mx = INT_MIN;
        int sum = 0;
        for(auto it:nums)
        {
            sum += it;
            mx = max(mx,sum);
            if(sum < 0)
                sum = 0;
        }
        return mx;
    }
};