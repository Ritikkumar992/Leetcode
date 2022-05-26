class Solution {
public:
    int hammingWeight(uint32_t n) {
        //Approach_03: Built in method:
        return __builtin_popcount(n);
    }
};