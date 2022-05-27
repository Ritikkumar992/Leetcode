class Solution {
public:
    int numberOfSteps(int num) {
        //Brute force: Time:O(N) and Space:0(1)
        int cnt = 0;
        while(num != 0)
        {
            if(num%2 == 0)
                num /= 2;
            else
                num -= 1;
            cnt++;
        }
        return cnt;
    }
};