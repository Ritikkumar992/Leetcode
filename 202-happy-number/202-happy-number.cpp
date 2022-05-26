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
        //Appraoch_01: Time:O(nlogn) and Space:O(nlogn)
        set<int> seen;
        while(n != 1 && !seen.count(n)){
            seen.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};