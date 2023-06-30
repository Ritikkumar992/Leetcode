class Solution {
public:
    int singleNumber(vector<int>& A) {
        int N = A.size();
        int xorr = 0;
	    for(int i = 0;i<N;i++)
	    {
	        xorr = xorr^A[i];
	    }
	    return xorr;
    }
};