class Solution {
    int getNext(int n){
        int totalSum = 0;
        while(n>0){
            int d = n%10;
            n /= 10;
            totalSum += d*d;
        }
        return totalSum;
    }
public:
    bool isHappy(int n) {
        //Appraoch_02: Time:O(nlogn) and Space:O(1)
        int slower  = n;
        int faster = getNext(n);
        while(faster != 1 && slower != faster)
        {
            slower = getNext(slower);
            faster = getNext(getNext(faster));
        }
        return faster == 1;
    }
};