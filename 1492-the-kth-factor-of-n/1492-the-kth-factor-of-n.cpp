class Solution {
public:
    int kthFactor(int n, int k) {
        //Better Approach : Time:O(n) and Space:O(1)
        for(int i = 1;i<=n/2;i++)
        {
            if(n%i == 0)
                k--;
            if(k == 0)
                return i;
        }
        if(k-1 == 0)
            return n;
        return -1;
    }
};