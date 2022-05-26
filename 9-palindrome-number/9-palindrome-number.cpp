class Solution {
public:
    bool isPalindrome(int x) {
        //Approach_03: Time:O(n) and Space:O(1)
        if(x<0 || (x%10 == 0 && x!= 0))
            return false;
        
        int ans = 0;
        while(x>ans)
        {
            int rem = x%10;
            ans = ans*10 + rem;
            x /= 10;
        }
        return ans == x || x == ans/10;
    }
};