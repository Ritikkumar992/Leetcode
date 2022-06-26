class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // Approach_02: Using Prefix Sum: Time:(2k) and Space:O(n)
        int n = cardPoints.size();
        vector<int>left(k+1), right(k+1);
        left[0] = 0, right[0] = 0;
        
        for(int i = 0;i<k;i++)
        {
            left[i+1] = cardPoints[i]+left[i];
            right[i+1] = cardPoints[n-i-1]+right[i];
        }
        int mx = 0;
        for(int i = 0;i<=k;i++)
        {
            int cur = left[i]+right[k-i];
            mx = max(mx,cur);
        }
        return mx;
    }
};