class Solution {
public:
    int climbStairs(int n) {
        // most optimized approach => time: O(n) and space: O(1)
        int prev2 = 1, prev = 1;
        for(int i = 2;i<=n;i++){
            int cur_i = prev2+prev;
            prev2 = prev;
            prev = cur_i;
        }
        return prev;
    }
};