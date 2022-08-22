class Solution {
public:
    bool isPowerOfFour(int n) {
        //2.Apporach_02:
        if(n<1)
            return false;
        while(n!=1)
        {
            if(n%4 != 0){
                return false;
            }
            else{
                n/=4;
            }
        }
        
        return true;
    }
};