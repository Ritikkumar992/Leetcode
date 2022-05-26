class Solution {
public:
    int kthFactor(int n, int k) {
        //Brute force: Time:O(n) + O(logn) and Space: O(n) 
        vector<int> res;
        for(int i = 1;i<=n;i++)
        {
            if(n%i == 0)
                res.push_back(i);
        }
        sort(res.begin(),res.end());
        if(res.size()<k)
            return -1;
        return res[k-1];
    }
};