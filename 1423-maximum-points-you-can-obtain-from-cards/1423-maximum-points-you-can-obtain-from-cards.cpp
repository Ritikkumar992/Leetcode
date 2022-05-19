class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //Using Sliding Window Techinique:
        int n = cardPoints.size();
        int i = 0, j = n-k;
        
        //initially sliding window's total sum = sum of the last k digits:
        int total = accumulate(cardPoints.begin()+j, cardPoints.end(),0);
        int best = total;
        while(k--)
        {
            best = max(best, total += cardPoints[i++] - cardPoints[j++]); 
        }
        return best;
    }
};