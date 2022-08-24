class Solution {
public:
    bool isPowerOfThree(int n) {
        //Approach_01:Using Loop;
        if(n == 1)
            return true;
        if(n == 0)
            return false;
        while(n!=1){
            if(n%3 == 0)
                n /=3;
            else
                return false;
        }
        return true;
    }
};