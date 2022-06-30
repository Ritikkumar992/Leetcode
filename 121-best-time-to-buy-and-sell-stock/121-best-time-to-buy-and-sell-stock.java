class Solution {
    public int maxProfit(int[] prices) {
        // Approach_02:better approch:time:O(n) and space:O(1)
        int maxProfit = Integer.MIN_VALUE;
        int minPrice = Integer.MAX_VALUE;
        
        for(int i = 0;i<prices.length;i++)
        {
            minPrice = Math.min(minPrice, prices[i]);
            maxProfit = Math.max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    }
}