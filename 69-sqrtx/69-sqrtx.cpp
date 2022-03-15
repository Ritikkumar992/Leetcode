class Solution {
public:
    int mySqrt(int x) {
        //usign binary search: Time ; (log sqrt(x)) and space: O(1)
        long long  start = 0, end = INT_MAX, ans = 0;
        while(start <= end)
        {
            long long m  = start + (end-start) / 2;
            if(m*m <= x){
                ans = m;
                start = m+1;
            }else{
                end = m-1;
            }
        }
        return ans;
    }
};