class Solution {
public:
    int numberOfSteps(int num) {
        //Using Bit Manipulation;
        int cnt = 0;
        while(num != 0)
        {
            if((num&1) != 1)
                num = num>>1;
            else
                num -= 1;
            cnt++;
        }
        return cnt;
    }
};