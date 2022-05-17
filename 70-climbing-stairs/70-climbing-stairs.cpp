class Solution {
public:
    int climbStairs(int n) {
        //Space Optimization:
        //Recursion to Tabulation : Time : O(n) and Space:O(1)
        int prev2 = 1, prev1 = 1;
        for(int i = 2;i<=n;i++){
            int curi = prev2+prev1;
            prev2 = prev1;
            prev1 = curi;
        }
        return prev1;
    }
};