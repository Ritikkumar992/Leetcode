class Solution {
public:
    void findCombination(vector<vector<int>> &ans, vector<int> &ds, int start, int n, int k) {
		if(k==0) {
			ans.push_back(ds);
			return;
		}
		for(int i=start;i<=n;i++) {
			ds.push_back(i);
			findCombination(ans,ds, i+1, n, k-1);
			ds.pop_back();
		}
	}
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>ds;
        findCombination(ans,ds,1,n,k);
        return ans;
    }
};