class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),cmp);
        vector<int>v;
        for(auto i:envelopes){
            auto it=lower_bound(v.begin(),v.end(),i[1]);
            if(it==v.end())
                v.push_back(i[1]);
			//if the element is greater than all elements push it
            else
                *it=i[1];
			//if it less than or equal to a particular element replace it,because it may form the Longest Increasing subsequence
            
        }
        return v.size();

        
    }
};