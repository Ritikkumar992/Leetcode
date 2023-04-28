class Solution {
public:
    int fib(int n) {
        // recursive apporach : time: O(log n)
        
        // base case:
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2); // main logic.
    }
};