class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //optimal approach: 
        int mx_profit = 0;
        int min_price = INT_MAX;
        
        for(int i = 0;i<prices.size();i++){
            min_price = min(min_price,prices[i]);
            mx_profit = max(mx_profit,prices[i]-min_price);
        }
        return mx_profit;
    }
};