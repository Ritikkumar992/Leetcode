class Solution {
public:
    int fib(int n) {
        //Space Optimization:
        //Recursion to Tabulation : Time : O(n) and Space:O(1)
        if(n<=1)
            return n;
        int prev2 = 0, prev1 = 1;
        for(int i = 2;i<=n;i++){
            int cur = prev2 + prev1;
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};