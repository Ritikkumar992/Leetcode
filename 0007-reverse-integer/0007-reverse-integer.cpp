class Solution {
public:
    int reverse(int x) {
        int temp = x, ans = 0;
        while(temp != 0)
        {
            int digit = temp%10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10){
                return 0;
            }
            ans = ans*10 + digit;
            temp /= 10;
        }
        return ans;
    }
};