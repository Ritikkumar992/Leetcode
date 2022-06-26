class Solution {
    public int maxScore(int[] cardPoints, int k) {
        //Approach_03: Using Sliding window Technique: Time:O(k) and Space:O(1)
        int sum = 0, n = cardPoints.length;
        
        // step1: Sum of first k elements: i.e sum of left window;
        for(int i = 0;i<k;i++){
            sum += cardPoints[i];
        }
        // Step2: substract the value from k-1 till 0 and add the value cardPoints[n+i-k]
        int maxPoints = sum;
        for(int i = k-1;i>=0;i--)
        {
            sum = sum - cardPoints[i]+cardPoints[n+i-k];
            maxPoints = Math.max(maxPoints, sum);
        }
        return maxPoints;
    }
}