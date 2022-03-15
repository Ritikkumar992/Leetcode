class Solution {
public:
    int mySqrt(int x) {
        // linear Search: TIme: O(sqrt(x)) and Spae:O(1)
        long long y = 0;
        while(y*y <= x){
            y++;
        }
        return y-1;
        
    }
};