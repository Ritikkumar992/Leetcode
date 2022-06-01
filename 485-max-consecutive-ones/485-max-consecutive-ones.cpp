class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //Simple Approach:Time:O(n) and Space:O(1)
        int cnt = 0, mx = 0;
        for(auto n:nums)
        {
            if(n == 1){
                cnt++;
                mx = max(mx, cnt);
            }
            else
                cnt= 0;
        }
        return mx;
    }
};