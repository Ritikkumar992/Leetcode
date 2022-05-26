class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        do{
            ans = ans*10 + x%10;
            x /= 10;
            
        }while(x);
        return (ans>INT_MAX || ans < INT_MIN )? 0:ans;
    }
};