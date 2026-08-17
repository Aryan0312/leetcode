// Last updated: 8/17/2026, 9:23:56 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0;
        int maxProfit = 0;
        int buy = prices[0];
        for(int i =1;i<n;i++){
            profit = prices[i] - buy;
            maxProfit = max(profit,maxProfit);
            buy = min(buy,prices[i]);
        }

        return maxProfit;
    }
};