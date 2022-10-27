class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
		//flatten into 1-d array using new key i.e, i*100+j
        unordered_set<int> a,b;
        int n=img1.size(), m=0;
        for(int i=0;i<n;i++) for(int k=0;k<n;k++) {
            if(img1[i][k]==1) a.insert(i*100 + k);
            if(img2[i][k]==1) b.insert(i*100 + k);
        }
        map<int,int> cnt;
        for(auto i: a) for(auto j:b) cnt[i-j]++, m=max(m,cnt[i-j]);
        return m;    
        
    }
};