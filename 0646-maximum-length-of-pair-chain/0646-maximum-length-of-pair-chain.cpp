class Solution {
public:
    static bool comp(const vector<int>&a, const vector<int>&b){
        if(a[1]==b[1]) return a[0]<b[0];
        return a[1]<b[1];
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), comp);
        int mx = INT_MIN, ans = 0;
        
        for(auto pair: pairs)
        {
            if(pair[0] > mx){
                ans++;
                mx = pair[1];
            }
        }
        return ans;
    }
};