class Solution {
public:
    int singleNumber(vector<int>& A) {
        int N = A.size();
        map<int,int>mp;
	    for(int i =0;i<N;i++){
	        mp[A[i]]++;
	    }
	    for(auto m:mp){
	        if(m.second == 1){
	            return m.first;
	        }
	    }
	    return -1;
    }
};