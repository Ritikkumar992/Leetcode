class Solution {
public:
    int hammingWeight(uint32_t n) {
        //Approach_01: 
        int cnt = 0;// count the set bits
        while(n>0) // iterate until all bits are traversed;
        {
            if((n&1)>0) // check the parity of first bit from the right;
                cnt++;
            n = n>>1; // shift one bit to the right;
        }
        return cnt;
    }
};