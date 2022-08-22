class Solution {
public:
    bool isPowerOfFour(int n) {
        //3.Apporach_03:Using recursion:
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(n%4 == 0){
            return isPowerOfFour(n/4);
        }
        return false;
    }
};