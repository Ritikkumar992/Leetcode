class Solution {
public:
    int hammingWeight(uint32_t n) {
        //Approach_02: no of iteration is equal to no of set bits 
        int cnt = 0;// count the set bits
        while(n>0) // iterate until all bits are traversed;
        {
            ++cnt;
            n = n&(n-1); // change the first set bit from right to 0.
        }
        return cnt;
    }
};