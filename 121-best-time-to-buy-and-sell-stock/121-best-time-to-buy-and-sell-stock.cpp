class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Time:O(n) and Space:O(1)
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for(auto it:prices)
        {
            min_price = min(min_price,it);
            max_profit = max(max_profit, it-min_price);
        }
        return max_profit;
    }
};